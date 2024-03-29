#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *  _strcat- concatenates two strings
 * @dest: destination string
 * @src: string being appended to dest
 * Return: pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int lendest = strlen(dest);
	int lensrc = strlen(src);
	int i;

	for (i = 0; i <= lensrc; i++)
	{
		dest[lendest + i] = src[i];
	}
	return (dest);
}
