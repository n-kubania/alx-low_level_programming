#include "main.h"

/**
 * reverse_array - reverses content of elements in an array
 * @a: an array of integers
 * @n: the number of integers to swap
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int s1, s2, c;
	int i = 0;

	for (s1 = 0; (s2 = n - 1); s1++, s2--)
	{
		c = a[s1];
	a[s1+i] = a[s2] ;
	a[s2] = c;
	}
}
