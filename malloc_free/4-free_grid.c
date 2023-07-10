#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: 2D array
 * @height: columns of the array
 */

void free_grid(int **grid, int height)
{
	int count;

	for (count = 0; count < height; count++)
		free(grid[count]);

	free(grid);
}
