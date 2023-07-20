#include <stdio.h>
/**
 * main - A program that prints all alphabets in lower case apart from q and e
 * Return: 0 Always (success)
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 113 || n == 101)
		{
		n++;
		continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
