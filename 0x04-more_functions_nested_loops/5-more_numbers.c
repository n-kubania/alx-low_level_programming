#include "main.h"

/**
 * more_numbers -print 0 to 14 ten times
 * Return: void
 */

void more_numbers(void)
{
	int a, i;

	for (a = 0; a < 10; a++)
	{
	for (i = 0; i <= 14; i++)
	{
		if (i >= 10)
		_putchar('1');
		_putchar(i % 10 + '0');
	}
		_putchar('\n');
	}
}
