#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -  frees a 2 dimensional grid created
 * @grid: The allocated memory to the grid to be freed
 * @height: The size of the grid
 *
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
