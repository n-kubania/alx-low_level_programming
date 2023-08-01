#include "main.h"

/**
 * rot13 - encodes a string using Rot 13
 * @s: string
 * Return: pointer to encoded string
 */

char *rot13(char *s)
{
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = s;
	int i;

	while (*s)
	{
		for (i = 0; i < 52; i++)
		if (*s == rot13[i])
		{
			*s = ROT13[i];
			break;
		}
		s++;
	}
	return (ptr);
}
