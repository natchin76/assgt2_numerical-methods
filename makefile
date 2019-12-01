output: array2.o func.o
	gcc -o output array2.o func.o -lm

array2.o: array2.c
	gcc -c array2.c -lm

func.o: func.c mn_var.h
	gcc -c func.c -lm

clean:
	rm output 		 				
