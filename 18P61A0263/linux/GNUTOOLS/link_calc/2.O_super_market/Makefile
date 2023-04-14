include .config
ifdef CON_STATIC
	vv = -static
endif
all:scr/main.o 
	gcc ${vv} scr/main.o -L libr -lsuper -o supermat
	echo "built done for all"
scr/main.o:
	make -C scr
library:
	make -C libr
clean:
	make -C src clean
	make -C libr clean
install:
	sudo cp libr/libsuper.a /usr/lib
	sudo cp libr/libsuper.so /usr/lib
	sudo cp supermat /usr/bin
uninstall:
	rm /usr/lib/libsuper* /usr/bin/supermat



