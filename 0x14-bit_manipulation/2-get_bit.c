#include "main.h" /* Include the appropriate header file */

/**
 * get_bit - Returns the value of a bit at a given index in a decimal number.
 * @n: The decimal number to search.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit (0 or 1) or -1 if the index is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	if (index > 63)
	return (-1); /* Index is out of range. */

	result = (n >> index) & 1;
	return (result);
}
