#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocate memory for a 2D matrix of integers
 * @width: The number of columns in the matrix
 * @height: The number of rows in the matrix
 * Return: Pointer to the allocated 2D matrix, or NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **matrix;

	if (width <= 0 || height <= 0)
	return (NULL);

	/* Allocate memory for the matrix */
	matrix = (int **)malloc(height * sizeof(int *));
	if (matrix == NULL)
	return (NULL);

	/* Allocate memory for each row */
	for (i = 0; i < height; i++)
	{
	matrix[i] = (int *)malloc(width * sizeof(int));
	if (matrix[i] == NULL)
	{
	/* Free previously allocated rows if allocation fails */
		for (j = 0; j < i; j++)
			free(matrix[j]);
		free(matrix);
	return (NULL);
	}
	}

	/* Initialize matrix elements to zero */
	for (i = 0; i < height; i++)
	for (j = 0; j < width; j++)
	matrix[i][j] = 0;

	return (matrix);
}
