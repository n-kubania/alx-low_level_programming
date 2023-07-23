#include "main.h"

/**
 * print_number - print an integer
 * @n: integer to be printed
 * Return: Always 0
 */

void print_number(int n)
{
	int a = n;

	if (n < 0)
	{
		_putchar('-');
		a = -a;
	}
	if (a / 10 != 0)
	{
		print_number(a / 10);
		_putchar(a % 10 + '0');
	}
}
