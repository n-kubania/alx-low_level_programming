#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - compare two lines
 * @s1:first line to be compared
 * @s2:second line to be compared
 * Return: always o (success)
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
		return (s1[i] - s2[i]);
		}
	}
	return (0);
}
