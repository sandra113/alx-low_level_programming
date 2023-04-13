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
	ptr = malloc(old_size);

	if (new_size == old_size)
		return (ptr);

	ptr = malloc(old_size + new_size);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}

	if (ptr != NULL && new_size == 0)
	{
		return (NULL);
	}
	return (ptr);
}

