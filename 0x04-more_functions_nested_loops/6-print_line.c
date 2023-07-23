#include "main.h"

/**
 * print_line -print a straight line  in the terminal
 * @n: number of times to ne printed
 * Return: Always 0 (success)
 */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
