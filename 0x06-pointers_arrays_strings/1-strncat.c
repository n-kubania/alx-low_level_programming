#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *  _strncat- concatenates two strings
 * @dest: destination string
 * @src: string being appended to dest
 * Return: pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int lendest = strlen(dest);
	int lensrc = strlen(src);

	do

	{
		(dest[lendest + n] = src[n]);
	}
	while (n <= lensrc)
		{
		putchar(n++);
		}
	}
	putchar('\n');
}
