#include <stdio.h>
/**
 * main - A program that prints lowercase alphabetic numbers using putchar
 * Return: Always 0 (sucess)
 */

int main(void)
{
	char letter = 'a';

	while (letter  <= 'z')
	{
		putchar(letter);
		letter++
	}
	putchar('\n');
	return (0);
}
