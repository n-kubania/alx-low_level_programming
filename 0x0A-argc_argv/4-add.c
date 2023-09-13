#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main- A program that adds positive numbers
  * @argc: Number of command line arguements
  * @argv: Array of strings containing arguements
  * Return: Always 0 (success)
  */

int main(int argc, char *argv[])
{
	int i, number, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
		for (i = 1; i < argc; i++)
		{
			char *str = argv[i];
			int j = 0;

		while (str[j] != '\0')
		{
		if (!isdigit(str[j]))
			printf("Error\n");
			return (1);
		}
		j++;
		}

			number = atoi(argv[i]);
		}	
			if (number <= 0)

			printf("Error\n");
			return (1);
		{
		sum += number;

			printf("%d\n", sum);
			return (0);
}
