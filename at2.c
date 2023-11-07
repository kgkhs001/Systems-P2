/** file at2.c
 * @Krishna Garg
 *
 * Program to convert an inputted character array into an array of double values
 */
#include <stdio.h>
#include <stdlib.h>
#include "print_arrays.h"
#include "array_sort.h"

#define SAMPLE_INT_ARRAY_SIZE (10)

/** Main program for converting an inputted character array into an array of double values and making the array go in ascending order from the number values of the inputs. It takes in values, runs the functions to
 * convert the values, sorts the array 
 * @return 0, Indicating success.
 */

int main(int argc, const char* argv[]) {
  int numbers_passed = argc - 1;
  double converted_array[numbers_passed];
  if(argc < 2){  							//makes sure that there is an input
  	printf("You have to enter at least one number\n");
  	return 1;
  }
  
  if(argc > SAMPLE_INT_ARRAY_SIZE + 1){					//If there are too many inputs then this will only check the set maximum number of values
  	printf("This program will only evaluate the first %d of the numbers entered. This is the array that will be sorted\n", SAMPLE_INT_ARRAY_SIZE);
  	array_conversion(argc, argv, SAMPLE_INT_ARRAY_SIZE, converted_array);		//calls function for conversion
  	print_double_array(converted_array, SAMPLE_INT_ARRAY_SIZE);			//calls function for printing
  	
  	array_sort_dbl(converted_array, SAMPLE_INT_ARRAY_SIZE);				//calls function for sorting
  	printf("\nThis is the sorted array:\n");					
  	print_double_array(converted_array, SAMPLE_INT_ARRAY_SIZE);			//calls fucntion for printing
  }
  else{
  	//convert the array
  	array_conversion(argc, argv, numbers_passed, converted_array);			//calls function for conversion
  	printf("This is the converted array:\n");				
  	print_double_array(converted_array, numbers_passed);				//calls function for printing
  	
  	array_sort_dbl(converted_array, numbers_passed);					//calls function for conversion
  	printf("\nThis is the sorted array:\n");
  	print_double_array(converted_array, numbers_passed);				//calls function for printing
  }
  return 0; // Success!
}
