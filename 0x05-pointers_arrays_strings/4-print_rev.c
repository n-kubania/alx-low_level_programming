#include "main.h"
#include <stdio.h>

/**
 * print_rev- print a string in reverse
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		putchar(s[i]);
	}
		putchar('\n');
}
