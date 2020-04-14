run-task-1:
	echo 'The quick brown fox jumps over the lazy dog\n' | wc -w

run-task-2:
	echo 'The quick brown fox jumps over the lazy dog\n' | tr "[:lower:]" "[:upper:]"

run-task-3:
	curl -o dkit.html https://www.dkit.ie

run-task-4: run-task-3
	tail -n 1 dkit.html | tr "[<>]" "[[]]" >> mangled.txt && head -n 1 dkit.html | tr "[<>]" "[[]]" >> mangled.txt

clean:
	unlink dkit.html && unlink mangled.txt
