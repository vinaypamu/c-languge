include ../.config
ifdef CON_ADD
	flag += -DADD
endif
ifdef CON_SUB
	flag += -DSUB
endif
all:main.o
	echo "build done"
main.o:main.c
	gcc ${flag} -c main.c
clean:
	rm main.o


