run-task-1:
	grep -E -i '^#([a-f0-9]{6}|[a-f0-9]{8})$$' colours.txt

run-task-2: build/convertHexDec
	grep -E -i '^#([a-f0-9]{6}|[a-f0-9]{8})$$' colours.txt | cut -b 4-5 | tr '\n' ' ' | ./build/convertHexDec | tr '\n' ','

run-task-3:
	echp 3

build/convertHexDec: convertHexDec.c
	gcc convertHexDec.c -o build/convertHexDec

clean:
	rm -rf ./build && mkdir build
