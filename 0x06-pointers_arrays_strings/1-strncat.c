#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *  _strncat- concatenates two strings
 * @dest: destination string
 * @src: string being appended to dest
 * @n: number of bytes to be concatenated to dest
 * Return: pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int lendest = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[lendest + i] = src[i];
	}
	return (dest);
}
