#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every character of a string
 * @str: string to be printed
 * Return: void
 */

void puts2(char *str)
{
	unsigned int i;

	if (str == NULL)
	return;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
