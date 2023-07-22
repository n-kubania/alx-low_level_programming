#include "main.h"
/**
 * print_sign - sign of a number whether positive, negative or zero
 * @n: number being checked
 * Return: 1 if positive -1 if negative 0 if zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
