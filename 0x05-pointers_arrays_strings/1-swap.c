#include "main.h"

/**
 * swap_int -swap two integers
 * @a:the first integer to be swapped
 * @b:the second integer to be swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
