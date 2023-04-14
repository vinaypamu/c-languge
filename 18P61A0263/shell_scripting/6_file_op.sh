#6. Write a shell script that accepts a file name, starting and ending line numbers as arguments and displays all the lines between the given line numbers
#!/bin/sh
sed -n " $1 ,$2p " $3
