#include "main.h"
#include <stdio.h>

/**
 * free_grid - releases memory from
 * a 2D array
 *
 * @grid: 2D array
 * @height: height
 *
 *
 * Return: void
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
