#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free memory allocated to 2D array
 * @grid: 2D array
 * @height: height of the array
 *
 * Return: void
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
