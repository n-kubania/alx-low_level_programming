#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @r: the number to be printed
 * Return: value of the last digit of a number
 */

int print_last_digit(int r)
{
	r = r % 10;

	if (r < 0)
	{
		r = r * -1;
	}
	_putchar(r + '0');
	return (r);
}
