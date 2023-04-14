vc=gcc
all:main_
	echo "build done"
main_:main.o add.o sub.o mul.o div.o
	gcc main.o add.o sub.o mul.o div.o -o main_
main.o: main.c
	gcc -c main.c
add.o:add.c
	gcc -c add.c
sub.o:sub.c
	gcc -c sub.c
mul.o:mul.c
	gcc -c mul.c
div.o:div.c
	gcc -c div.c
clean:
	rm *.o main_
install:
	sudo cp main_ /bin
