#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings- Function that prints strings
  * @separator: String to be printed between the strings
  * @n: Strings passed to the function
  * Return:String
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;

	unsigned int i;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
	printf("%s", va_arg(string, char *));

	if (separator != NULL && i < n - 1)
		{
		printf("%s", separator);
		}
	}
	printf("\n");
	va_end(string);
}
