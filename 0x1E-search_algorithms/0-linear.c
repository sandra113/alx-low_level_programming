#include "search_algos.h"

/**
* linear_search - function that searches for a value in an array of integers
* using the Linear search algorithm
* @array: the array
* @size: the size of the array
* @value: the value to be searched
* Return: index or -1 on failure
**/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
