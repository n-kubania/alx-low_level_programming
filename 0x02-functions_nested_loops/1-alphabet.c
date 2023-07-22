#include "main.h"
/**
 * main - A program that prints alphabets in lowercase
 * Return: 0 always (success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
	return (0);
}
