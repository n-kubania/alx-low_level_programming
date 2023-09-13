#include "main.h"

/**
 * _strlen -  returns the length of a string
 * @s: string to be counted
 * Return: length of a string
 */

int _strlen(char *s)
{
	unsigned int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
