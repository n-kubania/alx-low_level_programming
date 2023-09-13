#include "main.h"

 /**
   * get_endianness- Checks if a system is little or big endian
   * Return: 0 for big, 1 for little
   */
int get_endianness(void)
{
	unsigned int n = 1;
	char *ptr = (char *) &n;

	return (*ptr);
}

