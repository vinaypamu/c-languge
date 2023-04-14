#2. Write Script to find out biggest number from given three nos. Nos are supplied as command line arguments. Print error if sufficient arguments are not supplied.
#!/bin/sh
if [ $# -gt 3 ] || [ $# -lt 3 ] 
then
	echo " please enter 3 argumentes in this formate ./filename arg1 arg2 arg3"
else 
	if [ $1 -gt $2 ]&&[ $1 -gt $3 ]
	then
		echo "$1 is big number"
	elif [ $2 -gt $3 ]
	then
		echo "$2 is big number"
	else
		echo "$3 is big munber"
	fi
fi




