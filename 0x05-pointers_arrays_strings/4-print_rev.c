#include "main.h"
#include <string.h>

/**
 * print_rev - print a string in reverse
 * @s: string to be printed in reverse
 * Return: void
 */

void print_rev(char *s)
{
	char c;
	int i;
	int length = strlen(s);

	for (i = 0; i < length / 2; i++)
	{
		c = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = c;
	}
}
