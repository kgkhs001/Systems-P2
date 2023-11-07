Author: Krishna Garg

Function Programs:
at - This program prints integer values from 0 to 9 on the terminal
How to use: ./at
it will list the number values here, one number per row



at2 - This program takes an array of double values given to it by the the user via terminal, prints the values back to the terminal as double values, sorts them in ascending order, and prints them back to the terminal in sorted order. If there are more values entered than the program can handle then it will only run the program on the values that it can.

How to use: ./at2 <Some number values>
output is here



at3.c - This program takes in two values, the maximum value that you want any of the random integers to be, and how big you want your array of random ints to be. This program takes these two values, creates an array of random integers, prints this array, sorts the array to be in ascending order, and then prints the sorted array. 

How to use - ./at3 <max value for any given random integer> <how long you want the array to be>
output is here


How to compile and link each program:

Compiling -
at
at.o: at.c print_arrays.h
	gcc --std=c11 -c at.c

at2
at2.o: at2.c print_arrays.h array_sort.h
	gcc --std=c11 -c at2.c

at3
at3.o: at3.c print_arrays.h array_sort.h
	gcc --std=c11 -c at3.c
	
Linking -
at
at: at.o print_arrays.o
	gcc --std=c11 at.o print_arrays.o -o at
	
at2
at2: at2.o print_arrays.o array_sort.o
	gcc --std=c11 at2.o print_arrays.o array_sort.o -o at2

at3
at3: at3.o print_arrays.o array_sort.o
	gcc --std=c11 at3.o print_arrays.o array_sort.o -o at3
	
NOTES:
Both at2 and at3 are using print arrays and array sort header files and function file. These files have the functions that the main files at2.c and at3.c use to do the calculations and improve readability
