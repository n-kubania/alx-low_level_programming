#include "main.h"
/**
 * _islower -checks checks for lowercase character
 * @c: -character to be checked
 * Return: 1 if c is lowercase otherwise return 0
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		return (0);
}
