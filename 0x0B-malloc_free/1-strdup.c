#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - Returns a pointer of copied string to the allocated memory
  * @str: string to be copied
  * Return: Pointer to the copied string otherwise NULL
  */

char *_strdup(char *str)
{
	int i, length;
	char *dest;

	if (str == NULL)
		return (NULL);

	/* check if the input string pointer is not NULL */
	for (length = 0; str[length] != '\0'; length++)
	dest = malloc((str[length] * sizeof(char)) + 1);
	/* allocate memory for the copy of the string */

	if (dest == NULL)
		return (NULL);
	/* find the length of input string */

	for (i = 0; str[i] != '\0'; i++)
		dest[i] = str[i];
	dest[i] = '\0';
	return (dest);
}
