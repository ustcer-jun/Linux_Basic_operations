fork:fork.c
	gcc fork.c -o fork

.PHONY:clean
clean:
	rm -rf fork
