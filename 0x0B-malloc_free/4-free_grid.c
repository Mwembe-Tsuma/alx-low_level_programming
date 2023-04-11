#include "main.h"
#include <stdlib.h>

/**
 * free_grid- A function to free a 2D grid
 * @grid: The grid
 * @height: height
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
