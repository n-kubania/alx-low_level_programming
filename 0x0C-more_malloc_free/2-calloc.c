#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: number of elements of the array
 * @size: size of bytes of each element
 * Return: Pointer to allocated memory, otherwise NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, total_size;
	char *p;

	if (nmemb == 0 || size == 0)
	return (NULL);

	/* Calculate total memory size */
	total_size = nmemb * size;

	p = malloc(total_size);
	if (p == NULL)
	return (NULL);

	/* Initialize memory to zero */
	for (i = 0; i < total_size; i++)
	{
		p[i] = 0;
	}
	return (p);
}
