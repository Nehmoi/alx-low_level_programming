#include <stdlib.h>
#include "main.h"

/**
 * free_grid - a function that frees a 2 dimentional grid.
 * @grid: multidimensional array of integers.
 * @height: grid height.
 *
 * Return: no return
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
