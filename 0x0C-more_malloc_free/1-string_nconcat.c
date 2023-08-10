#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenate two strings
 * @s1: First string to be copied
 * @s2: Second string to be copied.
 * @n: Number of bytes of s2 to concatenate.
 *
 * Return: pointer to concatenated string, otherwise NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int lens1, lens2;
	char *s; /* concatenated string */

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	s2 = "";

	/* Calculate lengths of s1 and s2 */
	lens1 = strlen(s1);
	lens2 = strlen(s2);

	/* Adjust n if it's greater than or equal to the length of s2 */
	if (n >= lens2)
	n = lens2;

	/* Calculate the total length of the concatenated string */
	s = malloc(lens1 + n + 1);
	if (s == NULL)
		return (NULL);

	/* Copy s1 to s */
	for (i = 0; i < lens1; i++)
		s[i] = s1[i];

	/* Concatenate the first n bytes of s2 to s */
	for (j = 0; j < n; j++)
	s[i + j] = s2[j];

	/* Null-terminate the concatenated string */
	s[i + j] = '\0';

	return (s);
}
