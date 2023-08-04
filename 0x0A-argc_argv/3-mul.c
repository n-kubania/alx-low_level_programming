#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main- A program that multiplies two numbers
  * @argv: An array of string containing number of arguements
  * @argc: Number of command line arguements
  * Return: Always 0 (success)
  */

int main(int argc, char *argv[])
{
	int x, y, result;
	(void)argc;
	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	result = x * y;

		printf("%d\n", result);
	return (0);
}
