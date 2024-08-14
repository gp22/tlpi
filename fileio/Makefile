copy: copy.o error_functions.o
	gcc copy.o error_functions.o -o copy

copy.o: copy.c
	gcc -c copy.c

error_functions.o: ../lib/error_functions.c
	gcc -c ../lib/error_functions.c
