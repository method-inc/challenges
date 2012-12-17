(use utils)
(use srfi-1)
(use srfi-69)

(define dictionary-file (open-input-file "fixtures/words.txt"))
(define *dictionary* (map (lambda (line) (string-filter char-alphabetic? line)) (read-lines dictionary-file)))
(define keymap-file (open-input-file "fixtures/keymap.lisp"))
(define *key-list* (eval (read keymap-file)))
(define *keymap* (make-hash-table))
(define *suggestion-cache* (make-hash-table))
(define *max-distance* 12)

(for-each (lambda (x)
            (hash-table-set! *keymap*
                             (car (string->list (symbol->string (car x))))
                             (string->list (symbol->string (cadr x)))))
          *key-list*)

(define (bfs-keyboard-distance chars1 chars2 score)
  (cond
   ((> score *max-distance*) -1)
   ((or (null-list? chars1) (null-list? chars2)) score)
   (else
    (bfs-keyboard-distance (cdr chars1) (cdr chars2) (+ score (pre-bfs *keymap* (car chars1) (car chars2)))))))

(define (pre-bfs graph source target)
  (hash-table-ref *precomputed-distances* (list source target)))

(define (bfs graph source target)
  (if (equal? source target) 0
   (let ((distance (make-hash-table)))
     (bfs-search graph source target (list source) distance)
     (hash-table-ref distance (list source target)))))

(define (bfs-search graph source target unvisited distance)
  (cond
   ((null-list? unvisited) 'not-found)
   (else
    (let* ((current (car unvisited)))
      (cond ((equal? current target) current)
            (else
             (let ((unvisited-neighbors
                    (remove (lambda (neighbor) (hash-table-exists? distance (list source neighbor))) (neighbors current))))
               (for-each (lambda (neighbor)
                           (hash-table-set! distance (list source neighbor) (+ 1 (hash-table-ref/default distance (list source current) 0))))
                         unvisited-neighbors)
               (bfs-search graph
                           source
                           target
                           (append (cdr unvisited) unvisited-neighbors)
                           distance))))))))

(define (neighbors node)
  (hash-table-ref *keymap* node))

(define (tokenize-chars-with-index chars tokens current-token position)
  (cond
   ((null-list? chars) (append tokens (list (append (list (- position (length current-token))) current-token))))
   ((char-set-contains? char-set:letter (car chars))
    (tokenize-chars-with-index (cdr chars) tokens (append current-token (list (car chars))) (+ position 1)))
   (else
    (tokenize-chars-with-index (cdr chars)
                               (append tokens (list (append (list (- position (length current-token))) current-token)))
                               '()
                               (+ position 1)))))

(define (tokenize-string-with-index str)
  (tokenize-chars-with-index (string->list str) '() '() 0))

(define (suggest-better word best-result dictionary scoring-method)
  (if (null-list? dictionary)
      best-result
      (let ((dict-word (car dictionary)))
        (cond
         ((equal? dict-word word) (list -1 word))
         ((= (string-length word) (string-length dict-word))
          (let ((score (scoring-method (string->list word) (string->list dict-word) 0)))
            (if (and (not (negative? score)) (or (< score (car best-result)) (negative? (car best-result))))
                (suggest-better word (list score dict-word) (cdr dictionary) scoring-method)
                (suggest-better word best-result (cdr dictionary) scoring-method))))
         (else (suggest-better word best-result (cdr dictionary) scoring-method))))))

(define (suggest word method)
  (let ((result (hash-table-ref/default *suggestion-cache* word #f)))
    (if result
        result
        (let ((suggestion (suggest-better word '(-1 "none found") *dictionary* method)))
          (hash-table-set! *suggestion-cache* word suggestion)
          suggestion))))

(define (suggest-text text scoring-method)
  (filter
   (lambda (result) (= 3 (length result)))
   (map
    (lambda (token)
      (let* ((original-word (list->string (cdr token)))
             (original-word-without-punctuation (string-filter char-alphabetic? original-word))
             (original-word-lowercase (string-downcase original-word-without-punctuation))
             (position (car token))
;             (position (string-contains-ci text original-word-without-punctuation))
             (result (suggest original-word-lowercase scoring-method)))
        (if (negative? (car result))
            (list original-word-without-punctuation)
            (list original-word-without-punctuation (map-case original-word-without-punctuation (last result)) position))))
    (tokenize-string-with-index text))))

(define (map-case original-word new-word)
  (list->string
   (map
    (lambda (original-char new-char)
      (if (char-lower-case? original-char)
          (char-downcase new-char)
          (char-upcase new-char)))
    (string->list original-word)
    (string->list new-word))))

(define (replace-suggestions text suggestions)
  (cond ((null-list? suggestions) text)
        (else
         (replace-suggestions
          (let* ((suggestion (car suggestions))
                 (end (+ (string-length (second suggestion)) (third suggestion))))
            (string-replace text (second suggestion) (third suggestion) end))
          (cdr suggestions)))))

(define (suggest-with-replacement text)
  (replace-suggestions text (suggest-text text bfs-keyboard-distance)))

(define *precomputed-distances*
  (let ((vertices (hash-table-keys *keymap*))
        (distances (make-hash-table)))
    (for-each (lambda (vertex)
                (for-each (lambda (other-vertex)
                            (hash-table-set! distances (list vertex other-vertex)
                                             (bfs *keymap* vertex other-vertex)))
                          vertices))
              vertices)
    distances))

(map (lambda (line)
       (display (suggest-with-replacement line))
       (newline))
     (read-lines (current-input-port)))
