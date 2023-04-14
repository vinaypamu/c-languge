#7. Write a shell script that deletes all lines containing a specified word in one or more files supplied as arguments to it.
#!/bin/sh
echo " enter pattern "
read b
for a in $*
do
sed -e "/\<$b\>/d" $a #> sed.log this is to retrive output  #\b$b\b and \<$b\> is to avoid partial match replaces 
sed "/$b/d;G" $a
done
