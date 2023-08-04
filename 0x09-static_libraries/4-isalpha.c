#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: Character to be checked
 * Return: 1 if c is a letter, lowercase or uppercase otherwise return 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
