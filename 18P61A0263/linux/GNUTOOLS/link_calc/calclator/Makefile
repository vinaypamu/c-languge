include .config
ifdef CON_STATIC
	vv = -static
endif
all:main.o 
	gcc ${vv} ./main_clc/main.o -L add_sub_lib -lcalc -o main
	echo "build done for all"
main.o:
	make -C main_clc
library:
	make -C add_sub_lib
	#export LD_LIBRARY_PATH=add_sub_lib/
clean:
	make -C main_clc clean
	make -C add_sub_lib clean
	rm main
install:
	sudo cp main /usr/bin
	sudo cp add_sub_lib/libcalc.a /usr/lib
	sudo cp add_sub_lib/libcalc.so /usr/lib
uninstall:
	sudo rm /usr/bin/main
	sudo rm  /usr/lib/libcalc.a
	sudo rm  /usr/lib/libcalc.so 
 






