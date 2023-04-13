#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with malloc
 * @old_size: the size of the allocated space for ptr in bytes
 * @new_size: the new size of the memory block in bytes
 * Return: pointer to the new allocated space
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
		{
			return (NULL);
		}
		return (ptr2);
	}
	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
		return (NULL);

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	memcpy(ptr2, ptr, (old_size < new_size ? old_size : new_size));
		free(ptr);

	return (ptr2);
}
