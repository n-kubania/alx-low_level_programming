#include "main.h"

/**
 * flip_bits - Counts the number of bits to change
 *             to get from one number to another.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The number of bits to change.
 */
unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
	int i;
	unsigned int count = 0;
	unsigned long int difference = num1 ^ num2;

	for (i = 0; i < 64; i++)
	{
		if (difference & (1UL << i))
			count++;
	}

	return (count);
}
