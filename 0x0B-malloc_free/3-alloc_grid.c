#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to 2-dimeensional array
 *
 * @width: width of the 2D array
 * @height: height of the 2D array
 *
 * Return: int pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int **gridA, i, x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	gridA = malloc(sizeof(int *) * height);

	if (gridA == NULL)
	{
		free(gridA);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gridA[i] = malloc(sizeof(int) * width);
		if (gridA[i] == NULL)
		{
			for (x = 0; x <= i; x++)
			{
				free(gridA[x]);
			}
			free(gridA);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			gridA[x][y] = 0;
		}
	}
	return (gridA);
}
