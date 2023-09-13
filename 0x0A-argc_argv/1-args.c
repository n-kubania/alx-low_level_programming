#include "main.h"
#include <stdio.h>

/**
  * main- A program that prints the the number of arguemnets passed to it
  * @argc: Number of command line arguements
  * @argv: An array of string containing the command line arguements
  *Return: Always 0 (success)
  */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
