#include <stdio.h>
/**
 * main - A program that prints all single numbers of base 10 starting with 0
 * Return: 0 Always (success)
 */

int main(void)
{
	int n;

	for (int n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
