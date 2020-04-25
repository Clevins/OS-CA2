run-task-1:
	tail -n 10 access.log
run-task-2:
	egrep -o "[0-9]{3}.[0-9]{3}.[0-9]{3}.[0-9]{2}" access.log | uniq
run-task-3:
	grep "404" access.log
run-task-4:
	grep "MSIE" access.log >> access.ie.log > access.ie.log
run-task-5:
	echo "run task 5"
clean-up:
	unlink access.ie.log
