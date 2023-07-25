#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every character of a string
 * @str: string to be printed
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i % 2; i++)
	{
		puts(str);
	}
}
