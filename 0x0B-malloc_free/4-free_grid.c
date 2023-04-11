#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees memory allocate
 * @grid: pointer to an array of pointers
 * @height: height of the array
 * Return:
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++) /* frees the memory allocated to each raw */
	{
		free(grid[i]);
	}
	free(grid); /* free the memory allocated for the array of pointers */
}
