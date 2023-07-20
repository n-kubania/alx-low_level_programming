#include <stdio.h>
/**
 * main - A program that prints alphabet lowercase and uppercase
 * Return: 0 Always (success)
 */

int main(void)
{

	int j = 65, n = 97;

	while (j <= 90)
	{
		while (n <= 122)

			{
			putchar(n);
			n++;
			}
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
