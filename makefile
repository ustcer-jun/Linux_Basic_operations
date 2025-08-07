Process:main.c process.c
	gcc main.c process.c -o Process

.PHONY: clean
clean:
	rm -f Process
