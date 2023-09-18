#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: string being appended to dest
 * Return: pointer to the concatenated string (dest)
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	/* Find leghth of dest */
	while (dest[i] != '\0')
	{
	i++;
	}

	/* Append src to dest */
	while (src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}

	dest[i] = '\0';

	return (dest);
}

