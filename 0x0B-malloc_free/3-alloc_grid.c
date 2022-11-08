#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a
 * 2 dimensional array tof integers
 * @width: an input integer at number of colummns
 * @height: an input integer at number of rows
 * Return: pointer to a 2d array, NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **array, i = 0, j = 0;

	if (width <= || height <= 0)
	{
		return (NULL);
	}

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	for (; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			return (NULL);
		}
	}

	for (i = 0; i < Height; i++)
	{
		for (; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
