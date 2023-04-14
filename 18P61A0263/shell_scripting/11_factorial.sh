#Write a shell script to find factorial of a given integer.
#!/bin/sh
echo "enter number"
read a
b=$a
while [ $b -gt 1 ]
do
	b=$(expr $b - 1)
	a=$(expr $b \* $a)
done
echo "$a"


