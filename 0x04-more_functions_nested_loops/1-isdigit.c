#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: digit to be checked
 * Return: 1 for digit 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
