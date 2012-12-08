START=node hunter.js

comparison:
	cd fixtures && node messtext.js
	cat fixtures/test-before.txt | $(START) 0 > fixtures/test-after-jr.txt
	cat fixtures/test-before.txt | $(START) 1 > fixtures/test-after-mid.txt
	cat fixtures/test-before.txt | $(START) 2 > fixtures/test-after-sr.txt
	@echo "created fixtures/test-before.txt"
	@echo "created fixtures/test-after-*.txt"

test-jr: output
	@echo "diff of output.txt (empty = passing):"
	@diff output.txt fixtures/test-after-jr.txt -y --suppress-common-lines &2>&1

test-mid: output
	@echo "diff of output.txt (empty = passing):"
	@diff output.txt fixtures/test-after-mid.txt -y --suppress-common-lines &2>&1

test-sr: output
	@echo "diff of output.txt (empty = passing):"
	@diff output.txt fixtures/test-after-sr.txt -y --suppress-common-lines &2>&1

output:
	cat fixtures/test-before.txt | $(START) > output.txt

time:
	time cat fixtures/test-before.txt | $(START) > /dev/null

quotes:
	@echo "SIMPLE:\n"
	@cat fixtures/test-bill.txt
	@cat fixtures/test-bill.txt | $(START)
	@echo "FREQUENCY (Jr/Mid):\n"
	@cat fixtures/test-frequency.txt
	@cat fixtures/test-frequency.txt | $(START)
	@echo "KEYBOARD (Sr):\n"
	@cat fixtures/test-keyboard.txt
	@cat fixtures/test-keyboard.txt | $(START)
	@cat fixtures/test-difficult.txt
	@cat fixtures/test-difficult.txt | $(START)



.PHONY: comparison test-jr test-mid test-sr output quotes