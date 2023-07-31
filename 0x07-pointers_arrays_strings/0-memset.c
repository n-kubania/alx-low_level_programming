#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to put constant byte b
 * @b: constant byte
 * @n: number of bytes to fill memory with
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i; /* for the loop */

	for (i = 0; n > 0 ; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
