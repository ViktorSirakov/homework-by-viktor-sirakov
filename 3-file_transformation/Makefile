3-linux:
	gcc -c 3-transformation.c -o 3-transformation.o
	gcc -S 3-main.c -o 3-main_assemb.s
	gcc 3-main.c 3-transformation.c 3-transformation.o -o 3-main.out
	./main.out

3-windows:
	gcc -c 3-transformation.c -o 3-transformation.o
	gcc -S 3-main.c -o 3-main_assemb.s
	gcc 3-main.c 3-transformation.c 3-transformation.o -o 3-main.exe
	./main.exe

4-linux:
	gcc 4-main.c -lm -o 4-main.out
	./main.out

4-windows:
	gcc 4-main.c -lm -o 4-main.exe
	./main.exe

5-linux:
	gcc -c maths.c -o maths.o
	ar rcs libmath.a maths.o
	gcc main.c -L/Specific directory/ -lmath -o main.out
	./main.out

5-windows:
	gcc -c maths.c -o maths.o
	ar rcs libmath.a maths.o
	gcc main.c -L/Specific directory/ -lmath -o main.exe
	./main.exe



