#10)Write a shell script to list all of the directory files in a directory.
#!/bin/sh
for a in *
do
	if [ -d $a ]
	then
		echo "$a"
	fi
done

