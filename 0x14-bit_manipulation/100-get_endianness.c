#include "main.h"

/**
 * check_endianness - checks if a machine is little or big endian
 * Return: 0 for big endian, 1 for little endian
 */
int check_endianness(void)
{
	unsigned int test_value = 1;
	char *byte_pointer = (char *)&test_value;

	return (*byte_pointer);
}
