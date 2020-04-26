run-task-1:
	grep -E -i '^#([a-f0-9]{6}|[a-f0-9]{8})$$' colours.txt

run-task-2: build/convertHexDec
	grep -E -i '^#([a-f0-9]{6}|[a-f0-9]{8})$$' colours.txt | cut -b 4-5 | tr '\n' ' ' | ./build/convertHexDec | tr '\n' ','

run-task-3: build/convertHexRGBA
	grep -E -i '^#([a-f0-9]{6}|[a-f0-9]{8})$$' colours.txt | cut -c2- | tr '\n' ' ' | ./build/convertHexRGBA | sort -k 8n >> rgba_colours.txt

build/convertHexDec: convertHexDec.c
	gcc convertHexDec.c -o build/convertHexDec

build/convertHexRGBA: convertHexRGBA.c
	gcc convertHexRGBA.c -o build/convertHexRGBA

clean:
	rm -rf ./build && unlink rgba_colours.txt && mkdir build
