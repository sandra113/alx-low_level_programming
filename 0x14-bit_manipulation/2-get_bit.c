#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number
 * @index: the index at which the bit is checked
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int l;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	l = 1UL << index;
	return ((n & l) != 0);
}
