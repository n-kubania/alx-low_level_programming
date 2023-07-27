#include "main.h"

/**
 * string_toupper - to change string from lowercase to uppercase
 * @s: string to be changed
 * Return: pointer to the modified string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		s[i] = s[i] - 32;
	}
	return (s);
}

