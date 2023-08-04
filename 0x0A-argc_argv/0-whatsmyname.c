#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * main-  A program that prints its name
  * @argv: The array of strings containing command line arguement
  * @argc: The number of command line arguements.
  * Return: Always 0 (success)
  */

int main(int argc, char *argv[])
{
	(void)argc;
	program_name = strrchr(argv[0], '/');

	if (argv[0] != NULL)
		program_name++;
	}
	else if (program_name == argv[0])
	{
	printf("%s\n", program_name);
	return (0);
}
