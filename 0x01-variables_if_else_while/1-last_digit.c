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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of n is %d and is greater than 5", n);
	}
	else if (n == 0)
	{
		printf("Last digit of n is %d and is zero", n);
	}
	else
	{
		printf("Last digit of n is %d and is less than 6 and not 0", n);
	}
	return (0);
}
