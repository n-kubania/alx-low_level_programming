#include <stdio.h>
#include "function_pointers.h"

/**
  * array_iterator- function that executes a function
  * @array: pointer to the array
  * @size: Size of the array
  * @action: A a pointer to the function you need to use
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
