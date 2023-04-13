#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value in the array
 * @max: maximum value in the array
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, j;

	if (min > max)
		return (NULL);
	i = max - min + 1;
	arr = malloc(sizeof(int) * i);
	if (!arr)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		arr[j] = min + j;
	}

	return (arr);
}
