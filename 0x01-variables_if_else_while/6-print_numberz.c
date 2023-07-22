#include <stdio.h>
/**
 * main- prints numbers of base 10
 * Return: 0 Always (success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}
	putchar('\n');
	return (0);
}
