all: help.out strlength.out strconcat.out strcompare.out

mystrings:
	gcc -c mystrings.c -o mystrings.o

help:
	gcc help.c -o help.out
	./help.out

strlength:
	gcc strlength.c mystrings.o -o strlength.out
	./strlength.out

strconcat:
	gcc strconcat.c mystrings.o -o strconcat.out
	./strconcat.out

strcompare:
	gcc strcompare.c mystrings.o -o strcompare.out
	./strcompare.out

clean:
	rm -f *.out *.o