#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d array
 *@grid:memory block to be freed
 *@height:height of the array
 *Return:returns void
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
		free(grid[k]);

	free(grid);
}
