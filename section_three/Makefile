run-task-1:
	tail -n 10 access.log
run-task-2:
	egrep -o "[0-9]{3}.[0-9]{3}.[0-9]{3}.[0-9]{3}" access.log | uniq
run-task-3:
	grep "404" access.log | egrep -o "GET .*HTTP/1.1"
run-task-4:
	grep "MSIE" access.log > access.ie.log
run-task-5:compile-paths compile-procs
	echo "Section3 task 5"
compile-procs:
	cat access.log | sort -k 7n | tail -n8 | sort -k 1.53 | tr '\n' ' ' | ./build/gen_report
compile-paths:
	cat access.log | sort -k 7n | tail -n8 | cut -f4 -d' ' | sort -f | uniq -ic
clean:
	unlink access.ie.log
