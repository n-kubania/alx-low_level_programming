#include "function_pointers.h"
#include <stdio.h>

/**
  * print_name- A function that prints a name
  * @name: Name to be printed
  * @f: pointer to the function
  * Return: Nothing
  */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}
