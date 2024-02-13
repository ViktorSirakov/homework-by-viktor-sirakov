all: taskmanager.out

taskmanager.out: taskmanager.c processes.o
	gcc taskmanager.c processes.o -o taskmanager.out
	./taskmanager.out

processes.o: processes.c
	gcc -c processes.c -o processes.o

clean:
	rm -f *.o *.out