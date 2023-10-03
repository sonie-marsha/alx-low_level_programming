#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - frees memory allocated for 2D grid
 *@grid: ptr to grid
 *@height: height of the grid
 *
 *Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			if (grid[i] != NULL)
			{
				free(grid[i]);
			}
		}
		free(grid);
	}
}
