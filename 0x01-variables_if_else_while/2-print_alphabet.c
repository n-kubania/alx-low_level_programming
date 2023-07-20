#include <stdio.h>
/**
 * main - A program that prints lowercase alphabetic numbers using putchar
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int n = 97;

	while (n <= 122)

	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
