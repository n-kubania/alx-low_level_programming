#include <stdio.h>
/**
 * main - A program that prints lowercase alphabetic numbers using putchar
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int a = 97;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
