safeint.o:
	gcc -c safeint.c -o safeint.o

safeadd.out: safeint.o
	gcc safeadd.c safeint.o -o safeadd.out
	./safeadd.out 4 4

safesubtract.out: safeint.o
	gcc safesubtract.c safeint.o -o safesubtract.out
	./safesubtract.out 10 2

safemultiply.out: safeint.o
	gcc safemultiply.c safeint.o -o safemultiply.out
	./safemultiply.out 4 2

safedivide.out: safeint.o
	gcc safedivide.c safeint.o -o safedivide.out
	./safedivide.out 32 4

clean:
	rm -f *.out *.o