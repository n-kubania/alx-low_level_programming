#include <stdio.h>
/**
 * main - A program that prints lowercase alphabetic numbers using putchar
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int a = 97;

	while (a  <= 122)	{
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
