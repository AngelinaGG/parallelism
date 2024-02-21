main: main.o
	gcc -o a.out main.c -lm

main.o: main.c
	gcc -c main.c

float: main

double: main
	gcc -DALOHA main.c -lm

clean: cleanogj cleanmain

cleanogj:
	rm *.o

cleanmain:
	rm a.out

.PHONY: clean cleanogj cleanmain float double
