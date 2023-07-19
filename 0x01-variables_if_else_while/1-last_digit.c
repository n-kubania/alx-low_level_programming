#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A program that prints last digit of a string
 * Return: Always 0(success)
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (n > 5)
	{
		printf("Last digit of n is %d  and is greater than 5\n", n % 10);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of n is %d and is less than 6 and not 0\n", n % 10);
	}
	else
	{
		printf("Last digit of n is %d and is zero\n", n % 10);
	}
	return (0);
}
