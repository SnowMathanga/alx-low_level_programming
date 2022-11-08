#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2d array of int previously
 * created by your malloc_grid function
 * @grid: an  input 2d array of ints to free
 * @height: height of grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
	{
		return;
	}
	while (i < height)
	{
		free((int *)grid[i++]);
	}
	free(grid);
}
