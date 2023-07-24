#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string being converted
 * Return: number
 */

int _atoi(char *s)
{
	int i = 0;
	int n = 1;

	while (*s)

	{
	if (*s == '-')
	{
		n *= -1;
	}
	else if (*s >= '0' && *s <= '9')
	{
		i = i * 10 + (*s - '0');
	}
	else if (i > 0)
	{
		break;
	}
	s++;
	}
	return (i * n);
}
