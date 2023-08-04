#include "main.h"
#include <stdio.h>

/**
  * main- A program that prints all arguements passed to it
  * @argv: An array of string containing arguements
  * @argc: The number of command line arguements
  * Return: Always 0 (success)
  */
int main(int argc, char *argv[])
{
	int i;

	(void)argc;
	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
