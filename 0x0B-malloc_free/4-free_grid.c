#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a two dimensional grid
 *
 * @grid: address of the grid
 *
 * @height: height of the grid
 * 
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
