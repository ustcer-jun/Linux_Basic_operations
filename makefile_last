test_make: test_make.o
	g++ test_make.o -o test_make

test_make.o: test_make.s
	g++ -c test_make.s -o test_make.o

test_make.s: test_make.i
	g++ -S test_make.i -o test_make.s

test_make.i: test_make.cpp
	g++ -E test_make.cpp -o test_make.i

.PHONY: clean
clean:
	rm -f test_make
