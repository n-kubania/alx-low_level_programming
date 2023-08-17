#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: Number of parameters.
 *
 * Return: Sum of the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list mynumber;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(mynumber, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(mynumber, int);
	}

	va_end(mynumber);

	return (sum);
}
