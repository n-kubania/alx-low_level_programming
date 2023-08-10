#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * malloc_checked- A function that allocates memory
  * @b: Amount of memory to allocate
  * Return: Nothing
  */

void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
	{
		fprintf(stderr, "memory allocation failed.\n");
		exit(98);
	}
	return (memory);
}
