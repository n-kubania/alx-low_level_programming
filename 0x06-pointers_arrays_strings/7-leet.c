#include "main.h"

/**
 * *leet - encode a string into 1337
 * @c: string to be encoded
 * Return: pointer to the encoded string
 */

char *leet(char *c)
{
	char alpha[] = {'a', 'e', 'o', 't', 'l'};
	int num[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{

		for (i = 0; i < sizeof(alpha) / sizeof(char); i++)
		if (*c == alpha[i] || *c == alpha[i] - 32)
		{
			*c = '0' + num[i];
		}
		c++;
	}
	return (c);
}
