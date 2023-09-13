#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer
 * @b: Pointer to a string containing a binary number
 *
 * Return: The unsigned integer converted from binary, or 0 if any
 *         character in the string is not '0' or '1', or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL) /* Check if the input string is NULL */
		return (0);

	i = 0;
	while (b[i] != '\0') /* Loop through the string */
	{
	if (b[i] != '0' && b[i] != '1') /* Check for invalid characters */
	return (0);

	result = result * 2 + (b[i] - '0'); /* Convert binary to integer */
	i++;
	}

	return (result);
}
