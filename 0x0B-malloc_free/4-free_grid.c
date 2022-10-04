#include "main.h"
#include <stdlib.h>

/**
 *free_grid - frees memory occupied by 2-D
 *grid
 *@grid: grid whose memory space will be freed.
 *@height: number of rows
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
