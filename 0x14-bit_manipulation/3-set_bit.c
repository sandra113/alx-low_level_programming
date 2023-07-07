#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the number
 * @index: the index of the number
 * Return: the new value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		printf("Error: Invalid bit index or NULL pointer\n");
		return (-1);
	}

	mask = 1UL << index;
	*n |= mask;

	return (1);
}
