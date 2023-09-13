#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenate two strings
 * @s1: Destination string
 * @s2: Source string
 * Return: Pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int lens1 = strlen(s1);
	int lens2 = strlen(s2);
	char *s;

	/* Allocate memory */
	s = (char *)malloc(lens1 + lens2 + 1);
	if (s == NULL)
{
	printf("Memory allocation failed.\n");
	return (NULL);
}

	/* Copy string */
	for (i = 0; i < lens1; i++)
{
	s[i] = s1[i];
}
	for (i = 0; i <= lens2; i++)
{
	s[lens1 + i] = s2[i];
}

	return (s);
}
