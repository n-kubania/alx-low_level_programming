#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - Reallocate a memory block using malloc and free.
 * @ptr: Pointer to the memory block to reallocate.
 * @old_size: Size of the old memory block in bytes.
 * @new_size: New size of the memory block in bytes.
 *
 * Return: Pointer to the reallocated memory block, otherwise NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;
	unsigned int i, size;
	char *char_ptr1, *char_ptr2;

	/* Check conditions */
	if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
	return (NULL);
	}

	if (ptr == NULL)
	return (malloc(new_size));

	if (new_size <= old_size)
	return (ptr);

	/* Allocate memory for new pointer */
	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
	return (NULL);

	/* Copy data from old block to new */
	size = (old_size < new_size) ? old_size : new_size;

	/* Cast memory pointers to char pointers to manipulate individual chars */
	char_ptr1 = (char *)ptr;
	char_ptr2 = (char *)ptr2;

	for (i = 0; i < size; i++)
	{
		char_ptr2[i] = char_ptr1[i];
	}
	free(ptr);
	return (ptr2);
}
