#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: the string
 * @c: the character
 * Return: first occurence of c or null if character not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
		if (s[i] == c)
		{
			return (s + i);
		}
	return ('\0');
}
