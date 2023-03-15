#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function to free a two dimensional array
 * @grid: the two dimensional grid
 * @height: height dimension of grid
 */

void free_grid(**grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid[i]);
}
