#include "main.h"
/**
 * print - prints alphabets in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
