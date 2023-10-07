#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocate memory for a 2D grid of integers
 * @width: The width (number of columns) of the grid
 * @height: The height (number of rows) of the grid
 *
 * Return: A pointer to the allocated 2D grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;

	return (ptr);
}
