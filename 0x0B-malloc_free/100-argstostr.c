#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * argstostr- Concatenates all arguements of the program
  * @ac: Number of arguements
  * @av: Array of strings containing number of arguements
  * Return: pointer to a new string otherwise NULL
  */

char *argstostr(int ac, char **av)
{
	char *ptrstr;
	int length = 0;
	int i, j, n = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			length = length + strlen(av[i]);
	}

	ptrstr = malloc(length + 1);
	if (ptrstr == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptrstr[n] = av[i][j];
			n++;
		}
		ptrstr[n] = '\n';
		n++;
	}
	ptrstr[n] = '\0';

	return (ptrstr);
}
