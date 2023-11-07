/** file print_arrays.c
 * @Krishna Garg 
 * Functions for converting data types of arrays and printing arrays.
 */

#include <stdio.h>
#include <stdlib.h>
#include "print_arrays.h"
#define ARR_MAX (10);
/** Print an array of ints, one per line.
    @param an array to print
    @param num_entries Number of entries in the array
*/

void print_int_array(int a[], int num_entries) {
  int i; // Loop counter

  for (i = 0; i < num_entries; i++) {
    printf("%d\n", a[i]);
  }
}

/** Print an array of doubles, one per line.
    @param a Array to print
    @param num_entries Number of entries in the array
*/
void print_double_array(double a[], int num_entries) {
	int i; // Loop counter
  	for (i = 0; i < num_entries; i++) {
    		printf("%f\n", a[i]);
  	}
}
/** Convert an array of characters into an array of doubles
* @param original_size is the original size of the array (the array with the characters in it)
* @param doubles is the array that contains the characters that we want to convert
* @param converted_size is the size we want the converted array to be. In other words the size of the array converted_array
* @param converted_array is the result of the conversion. This will contain all the double values that have been converted from the array doubles
*/
void array_conversion(int orignial_size, const char* doubles[], int converted_size, double converted_array[]){
	int i; // Loop counter
	// Fill the array with consecutive integers
	for (i = 1; i < converted_size + 1; i++) {
		double n = atof(doubles[i]);
		converted_array[i - 1] = n;
	}
}


