#include "main.h"
#include <stdio.h>

/**
 * puts_half -print half of a string
 *  @str: string to be printed
 *  Return : void
 */

void puts_half(char *str)
{
	int length = 0;
	int half;

	while (str[length] != '\0')
		length++;
	half = (length + 1) / 2;
	while (half < length)

	{
		putchar(str[half]);
		half++;
	}
	putchar('\n');
}

