#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Amount of memory to allocate
 * Return: Pointer to the allocated memory, or exits with status 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
	{
	exit(98);
	}

	return (memory);
}
