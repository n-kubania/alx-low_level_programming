#include "main.h"
/**
 * print_alphabet_x10 -alphabets in lowercase
 * return: void
 */

void print_alphabet_x10(void)
{
	int i;
	int n;

	for (i = 0; i < 10; i++)
	{
		for (n = 97; n <= 122; n++)
		_putchar(n);
	}
	_putchar ('\n');
}
