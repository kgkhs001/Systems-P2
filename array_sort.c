/** file array_sort.c
 * @Krishna Garg
 *
 * function to sort an array of number values so that they are in ascending order.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "array_sort.h"

/** array_sort program to sort an array of number values so that they are in ascending order.
 * @param an array of integer values
 * @param the amount of integer values in the inputted array
 */

void array_sort(int array_input[], int size_of_array){
  int temp_array[size_of_array];
  int i;
  int j;

  for (i = 0; i < size_of_array; i++) { // this will make the temporary array have the same values in the same order as the input array
    temp_array[i] = array_input[i];
  }

  for (i = 0; i < size_of_array - 1; i++) {//This will do the actual sorting of the array

    for(j = 0; j< size_of_array - i - 1; j++){
      int n = temp_array[j];
      if (temp_array[j] > temp_array[j + 1]) {
        temp_array[j] = temp_array[j + 1];
        temp_array[j + 1] = n;
      }

    }
}

  for (i = 0; i < size_of_array; i++) { //this will set the orignial inputted array to the values of the newly changed array
    array_input[i] = temp_array[i];
  }
 }
 
/** array_sort_dbl program to sort an array of doubles so that they are in ascending order.
 * @param an array of double values
 * @param the amount of double values in the inputted array
 */

void array_sort_dbl(double array_input[], int size_of_array){
  double temp_array[size_of_array];
  int i;
  int j;

  for (i = 0; i < size_of_array; i++) { // this will make the temporary array have the same values in the same order as the input array
    temp_array[i] = array_input[i];
  }

  for (i = 0; i < size_of_array - 1; i++) {//This will do the actual sorting of the array

    for(j = 0; j< size_of_array - i - 1; j++){
      double n = temp_array[j];
      if (temp_array[j] > temp_array[j + 1]) {
        temp_array[j] = temp_array[j + 1];
        temp_array[j + 1] = n;
      }

    }
}

  for (i = 0; i < size_of_array; i++) { //this will set the orignial inputted array to the values of the newly changed array
    array_input[i] = temp_array[i];
  }
 }
 
/** rand_int generates a random integer value from 0 to the given range
*  @param range the maximum value that a random integer can be
*  @return a random integer value
*/
int rand_int_gen(int range){
	return (rand() % range);
}
/** rand_array generates an array of random integer values. 
* @param max_rand the maximum a random integer can be in the array
* @param num_rand how long the user want the array to be
* @param the array that the random values will be stored in
* @return void
*/
void rand_array(int max_rand, int num_rand, int *arr){
	int i;
	srand(time(NULL));
	for(i = 0; i < num_rand; i++){			//assign random values to each index in the array
		arr[i] = rand_int_gen(max_rand);	//uses the function defined above
	}
}
