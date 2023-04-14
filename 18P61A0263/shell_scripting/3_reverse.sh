#3. Write script to print given number in reverse order, for eg. If no is 123 it must print as 321
#!/bin/sh
temp=0
echo "enter number"
read a
while [ $a -ne 0 ]
do
	temp=$(expr $temp \* 10)
	temp=$(expr $a % 10 + $temp)
	a=$(expr $a / 10)
#	temp=$(expr $sum + $temp)
done
	echo "$temp"




