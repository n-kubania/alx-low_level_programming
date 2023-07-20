#include <stdio.h>
/**
 * main - A program that prints alphabet lowercase and uppercase
 * Return: 0 Always (success)
 */

int main(void)
{

	int n = 97;

	while (n <= 122)

	{
		putchar(n);
		n++;
	}

	int j = 65;

	while (j <= 90)

	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
