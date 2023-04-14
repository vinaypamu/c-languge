#4. Write script to determine whether given file exist or not, file name is supplied as command line argument, Also check for sufficient number of command line arguments.
#!/bin/sh
if [ $# -eq 1 ]
then
	if [ -e $1 ]
	then
		echo "file exist"
	else 
		echo "file not exist"
	fi
else 
	echo "only enter one file name"
fi

