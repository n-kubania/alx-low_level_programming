#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - compare two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return:
 *   - Less than 0 if s1 is less than s2
 *   - 0 if s1 is equal to s2
 *   - Greater than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	 int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
	if ((unsigned char)s1[i] != (unsigned char)s2[i])
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	i++;
	}

	return (0);
}

