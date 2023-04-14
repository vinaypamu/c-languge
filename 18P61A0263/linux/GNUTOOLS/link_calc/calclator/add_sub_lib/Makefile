all: libcalc.a libcalc.so
	echo "lib buid done"
libcalc.a: 
	gcc -c add.c sub.c
	ar -rcs libcalc.a add.o sub.o
libcalc.so:
	gcc -c -fpic add.c
	gcc -c -fpic sub.c
	gcc -shared -o libcalc.so add.o sub.o
clean:
	rm *.o lib*

