#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: string
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		_strlen_recursion(s + 1);
		return (1);
	}
}
