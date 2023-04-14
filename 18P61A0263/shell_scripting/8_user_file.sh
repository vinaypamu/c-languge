#8. Write a shell script that displays a list of all the files in the current directory to which the user has read, write and execute permissions.
#!/bin/sh
for a in * 
do
	if [ -x $a ]&&[ -r $a ]&&[ -w $a ]
	then
		ls -l $a
	fi
done



