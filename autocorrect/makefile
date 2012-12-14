START=node hunter.js

setup-jroes:
	brew install chicken

comparison:
	cd fixtures && node messtext.js
	cat fixtures/test-before.txt | $(START) 0 > fixtures/test-after-jr.txt
	cat fixtures/test-before.txt | $(START) 1 > fixtures/test-after-mid.txt
	cat fixtures/test-before.txt | $(START) 2 > fixtures/test-after-sr.txt

test-jr:
	cat fixtures/test-before.txt | $(START) 0 > output.txt
	@echo "diff of output.txt (empty = passing):"
	@diff output.txt fixtures/test-after-jr.txt -y --suppress-common-lines &2>&1

test-mid:
	cat fixtures/test-before.txt | $(START) 1 > output.txt
	@echo "diff of output.txt (empty = passing):"
	@diff output.txt fixtures/test-after-mid.txt -y --suppress-common-lines &2>&1

test-sr: output
	cat fixtures/test-before.txt | $(START) 2 > output.txt
	@echo "diff of output.txt (empty = passing):"
	@diff output.txt fixtures/test-after-sr.txt -y --suppress-common-lines &2>&1

time:
	time cat fixtures/test-before.txt | $(START) > /dev/null

quotes:
	@echo "\n          SIMPLE (Jr) \n"
	@cat fixtures/test-bill.txt
	@cat fixtures/test-bill.txt | $(START) 0
	@echo "\n          FREQUENCY (Mid) \n"
	@cat fixtures/test-frequency.txt
	@cat fixtures/test-frequency.txt | $(START) 1
	@echo "\n          KEYBOARD (Sr) \n"
	@cat fixtures/test-keyboard.txt
	@cat fixtures/test-keyboard.txt | $(START) 2
	@cat fixtures/test-difficult.txt
	@cat fixtures/test-difficult.txt | $(START) 2



.PHONY: comparison test-jr test-mid test-sr output quotes time