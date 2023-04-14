#9. Write a shell script that receives any number of file names as arguments checks if every argument supplied is a file or a directory and reports accordingly. Whenever the argument is a file, the number of lines on it is also reported.
#!/bin/sh
red='\e[1;31m'
for a in $*
do
	if [ -e $a ]
	then
		echo "$a"
		if [ -f $a ]
		then
			cat $a | wc -l
		else
			echo -e " ${red} given arg is directory"
		fi
	else
		echo "$a"
		echo " given arg is not exist"
	fi
done






