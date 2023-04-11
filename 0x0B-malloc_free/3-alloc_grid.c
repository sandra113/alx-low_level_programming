#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **aa;

	if (width <= 0 || height <= 0)
		return (NULL);

	aa = malloc(sizeof(int *) * height);
	if (aa == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		aa[i] = malloc(sizeof(int *) * width);
		if (aa[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(aa[j]);
			free(aa);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			aa[i][j] = 0;
		}
	}
	return (aa);
}
