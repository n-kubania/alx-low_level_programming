#include "main.h"
#include <stdlib.h>

/**
 * array_range - Create an array of integers from min to max.
 * @min: The minimum value (inclusive).
 * @max: The maximum value (inclusive).
 *
 * Return: Pointer to the created array, otherwise NULL or invalid input.
 */
int *array_range(int min, int max)
{
	int i, arraysize;
	int *array;

	if (min > max)
	return (NULL);

	/* Calculate array size */
	arraysize = max - min + 1;

	/* Allocate memory */
	array = malloc(arraysize * sizeof(int));
	if (array == NULL)
		return (NULL);

	/* Loop through min to max and fill the array */
	for (i = 0; i < arraysize; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
