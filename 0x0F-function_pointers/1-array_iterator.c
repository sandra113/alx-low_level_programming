#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameter
 * on each element of an array.
 * @array: the array used
 * @size: size of the array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
