all:main
	echo "built done"
main:add/add.o sub/sub.o mul/mul.o div/div.o main.o
	gcc add/add.o sub/sub.o mul/mul.o div/div.o main.o -o main
add/add.o:add/add.c
	make -C add 
sub/sub.o:sub/sub.c
	make -C sub 
mul/mul.o:mul/mul.c
	make -C mul
div/div.o:div/div.c
	make -C div
main.o:main.c
	gcc -c main.c
clean: 
	rm add/*.o sub/*.o mul/*.o div/*.o *.o main

