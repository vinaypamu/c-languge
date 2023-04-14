#!/bin/sh
if [ $# -lt 2 ] || [ $# -gt 2 ]
then
	echo "only enter two args"
else
	echo -n "$1+$2 =" ;expr $1 + $2
fi

