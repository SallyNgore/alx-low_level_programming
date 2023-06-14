#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: First operand
 * @height: Second operand
 *
 * Return: NULL if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (l = 0; l < i; l++)
				free(grid[l]);
			free(grid);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			grid[j][k] = 0;
	}
	return (grid);
}
