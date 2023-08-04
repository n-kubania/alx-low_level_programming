#include "main.h"

/**
 * square -find out square of a number
 * @n: the number to find square root
 * @num: the number to be squared to get n
 * Return: square
 */

int square (int n, int num);

int _sqrt_recursion(int n)

{
	return (square(n, 1));
}

/**
 * _sqrt_recursion - A function that returns natural square root of a number
 * @n: the number
 * Return: Return 0 if square root is found otherwise return -1
 */

int square (int n, int num)
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
