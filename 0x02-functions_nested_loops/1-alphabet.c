#include "main.h"
/**
 * main - A program that prints alphabets in lowercase
 * Return always 0 (success)
 */ 

int main(void)
{
	int n = 97;

	while (n <= 122)

	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
	return (0);
}
