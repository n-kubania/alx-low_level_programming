#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, index = 0;
	unsigned long int result;

	/* Loop through each bit (63 to 0) in the number. */
	for (i = 63; i >= 0; i--)
	{
		/* Right-shift the number 'n' by 'i' positions and store it in 'result'. */
		result = n >> i;

		/* Check if the least significant bit of 'result' is 1. */
		if (result & 1)
		{
			/* If it is 1, print '1' and increment the index of consecutive 1s. */
			_putchar('1');
			index++;
		}
		else if (index)
		{
			/* If it is 0 and there were previous consecutive 1s, print '0'. */
			_putchar('0');
		}
	}

	/* If there were no consecutive 1s in the binary representation, print '0'. */
	if (!index)
	{
		_putchar('0');
	}
}
