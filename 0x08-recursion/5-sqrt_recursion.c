#include "main.h"

/**
 * square- A function to find out square of a number
 * @num: The number to be squared to get n
 * @n: The number to find square root of
 * Return: Square of n otherwise return -1
 */

int square(int n, int num);

int _sqrt_recursion(int n)

{
	return (square(n, 1));
}

/**
 * _sqrt_recursion- A function that returns natural square root of a number
 * square- A function to find out square of a number
 * @n: The number
 * @num: The number to be squared
 * Return: Return square root of n if square root is found otherwise return -1
 */

int square(int n, int num)
{
	if (num * num == n)
	{
		return (num);
	}
	else if (num * num < n)
	{
		return (square(n, num + 1));
	}
	else
	{
		return (-1);
	}
}
