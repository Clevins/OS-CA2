# Unix tool and piping
## Cormac Levins & Patrick McDonnell
### Operating Systems CA2 April 2020

## Section 1
**Commands**
Generate the string 'The quick brown fox jumps over the lazy dog\n' and count the number of words in this
string. The word count should be printed to the terminal
```c
make run-task-1
```


Generate the string 'The quick brown fox jumps over the lazy dog\n' and convert all characters to uppercase.
Output should be printed to the terminal.
```c
make run-task-2
```

 Download the DkIT homepage (https://www.dkit.ie) HTML source code and save it to a file named dkit.html
```c
make run-task-3
```

Using the dkit.html file created in Task 3, create a new file named mangled.txt that contains the first and last line from
dkit.html, in reverse order, with all angled brackets (< and >) replaced with square brackets ([ and ])
```c
make run-task-4
```
clean directory of generated files
```c
make clean
```

## Section 2
Filter the list to only show valid colour codes. The filtered list should be printed to the terminal
```c
make run-task-1
```

Extract the Green value from each valid colour code and print the result to the terminal as a comma-separated list of decimal
value
```c
make run-task-2
```
Convert each valid colour code to the format rgba(r,g,b,a) and output the result to a new file named rgba-colours.txt. The
generated list of rgba() strings should all be valid CSS rgba() colour values, and should be sorted in ascending order by their alpha
value
```c
make run-task-3
```

clean directory of colourrgb.txt file and build folder and rebuild build folder
```c
make clean
```
## Section 3
 Print the last ten lines in the file to the terminal
```c
make run-task-1
```

 Generate and print to the terminal a list (one item per line) of all unique IP addresses in this file. The generated list should not
contain any duplicate entries
```c
make run-task-2
```

Generate and print to the terminal a list (one item per line) of all requests that resulted in a 404 status code. The generated
list should only show the "REQUEST" portion of a log entry
```c
make run-task-3
```

 Filter the log file entries to only those requests that were made from the Microsoft Internet Explorer browser. The filtered log
file should be saved to a new file named access.ie.log.
```c
make run-task-4
```

Filter the log file to only those entries that took 5 milliseconds or more to process. From this filtered list, generate and print to
the terminal a report that shows, for each unique request path:
* The request path
* The total number of requests to the path
* The shortest, longest, and average request time for the path
```c
make run-task-5
```

recursively delete build folder and remake it
```c
make clean
```


## References
* https://stackoverflow.com/questions/2114377/strings-in-c-how-to-get-substring
* https://unix.stackexchange.com/questions/581373/hexadecimal-color-codes-grep-regex-in-makefile
* https://stackoverflow.com/questions/2404794/strcmp-on-a-line-read-with-fgets
* https://www.geeksforgeeks.org/tr-command-in-unix-linux-with-examples/
* https://stackoverflow.com/questions/49313160/removing-duplicates-in-grep-output/49313231
* https://www.youtube.com/watch?v=KJG1dETacLI
* https://regexr.com/
* https://www.geeksforgeeks.org/egrep-command-in-linux-with-examples/
* https://www.geeksforgeeks.org/grep-command-in-unixlinux/
* https://www.geeksforgeeks.org/cat-command-in-linux-with-examples/
* https://chris.beams.io/posts/git-commit/
* https://stackoverflow.com/questions/29547115/how-to-convert-string-to-hex-value-in-c/29547549
* https://www.geeksforgeeks.org/taking-string-input-space-c-3-different-methods/
* http://www.cplusplus.com/reference/cstring/strtok/
* https://www.geeksforgeeks.org/sort-command-linuxunix-examples/
* https://linuxcommando.blogspot.com/2008/04/quick-hex-decimal-conversion-using-cli.html
* https://www.geeksforgeeks.org/uniq-command-in-linux-with-examples/
* https://www.geeksforgeeks.org/head-command-linux-examples/
* https://www.geeksforgeeks.org/tail-command-linux-examples/
* https://www.howtoforge.com/linux-uniq-command/
* https://www.geeksforgeeks.org/wc-command-linux-examples/
* https://www.geeksforgeeks.org/curl-command-in-linux-with-examples/
