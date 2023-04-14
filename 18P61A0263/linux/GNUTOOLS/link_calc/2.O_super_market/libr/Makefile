all:libsuper.a libsuper.so
	echo "build done for libs"
libsuper.a:
	gcc -c purchase.c
	gcc -c sale.c 
	gcc -c stock.c
	ar -rcs libsuper.a purchase.o sale.o stock.o
libsuper.so:
	gcc -c -fpic purchase.c
	gcc -c -fpic sale.c 
	gcc -c -fpic stock.c
	gcc -shared -o libsuper.so purchase.o sale.o stock.o
clean:
	rm *.o lib*

