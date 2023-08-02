#include "main.h"

/**
 * is_palindrome - Determines whether a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	char *start = s;

	/* Move the pointer to the end of the string */
	while (*s != '\0')
	{
	s++;
	}
	s--; /* Move back  to the last character */

	/* Compare characters from both ends */
	while (start < s)
	{
	if (*start != *s)
	{
	return (0);
	}
	start++; /* Move to the start */
	s--; /*move towards the start */
	}

	return (1); /* If the loop completed without returning, it's a palindrome */
}
