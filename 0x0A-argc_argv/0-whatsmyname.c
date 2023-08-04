#include <stdio.h>

/**
  * main-  A program that prints its name
  * @argv: The array of strings containing command line arguement
  * @argc: The number of command line arguements.
  * Return: Always 0 (success)
  */

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
