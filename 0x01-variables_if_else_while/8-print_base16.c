#include <stdio.h>
/**
 * main - prints hexadecimal
 * Return: 0 Always (success)
 */

int main(void)
{
	int n;
	char c;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}
	for (c = 97; c <= 102; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
