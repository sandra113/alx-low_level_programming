#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: pointer to unsigned long int
 * @index: the index starting from 0 of the bit you want to set
 * Return: 1 success and -1 error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= (1UL << index);
	return (1);
}
