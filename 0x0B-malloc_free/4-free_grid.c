#include <stdlib.h>
#include "main.h"

/**
  * free_grid - Free 2 dimensional grid
  * @grid: grid created by 2 dimensional arrays
  * @height: height
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; ++i)
	{
		free(grid[i]);
	}
	free(grid);
}
