#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - Frees a 2-dimensional grid previously created by alloc_grid
 * @grid: Pointer to the grid
 * @height: Number of rows in the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	return;

	/* Free memory in the rows and the grid */
	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}
	free(grid);
}
