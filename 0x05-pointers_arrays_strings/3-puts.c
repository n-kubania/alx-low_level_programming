#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
{
	while (*str)
	{
		write(STDOUT_FILENO, str, 1);
		str++;
	}
	write(STDOUT_FILENO, "\n", 1);
}
