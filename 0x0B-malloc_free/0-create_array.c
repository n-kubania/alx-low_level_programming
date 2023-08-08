#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - A function that creates array of chars and
  * intitializes it with a specific char
  * @size:  size of the array
  * @c: specific char that initializes the array
  * Return: pointer to the array or 0
  */

char *create_array(unsigned int size, char c)

{
	char *ptrstr;
	unsigned int i;

	ptrstr = (char*)malloc(size *sizeof(char));
		if (ptrstr == 0 || size == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		ptrstr[i] = c;
	}
		return (ptrstr);
}
