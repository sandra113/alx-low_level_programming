#include "search_algos.h"

/**
* binary_search - function that searches for a value in an array of integers
* using the binary search algorithm
* @array: the array
* @size: the size of the array
* @value: the value to be searched
* Return: index or -1 on failure
**/

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid;
	int i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in subarray: ");
		for (i = left; i <= right; ++i)
		{
			if (i != right)
			{
				printf("%d, ", array[i]);
			}
			else
			{
				printf("%d", array[i]);
			}
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
