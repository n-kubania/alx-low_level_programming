#include <stdio.h>
/**
 * main - prints alphabets lowercase in reverse
 * Return: 0 always (success)
 */

int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
