#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate a 2 dimensional grid to a memory space
 * @width: number off rows
 * @height: number of columns
 * Return: memory address of the grid
 */

int **alloc_grid(int width, int height)
{
	int **dummy_grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	dummy_grid = malloc(sizeof(int *) * height);
	if (dummy_grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		dummy_grid[i] = malloc(sizeof(int) * width);
		if (dummy_grid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(dummy_grid[i]);
			free(dummy_grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			dummy_grid[i][j] = 0
	}
	return (dummy_grid);
}
