myprog:gdb.o
	gcc -g gdb.o -o myprog

gdb.o:gdb.c
	gcc -g -c gdb.c -o gdb.o

.PHONY:clean
clean:
	rm -rf *.o myprog
