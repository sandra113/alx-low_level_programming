#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the number
 * @index: the index of the number
 * Return: the new value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit_value;

	if (index >= sizeof(unsigned long int) * 8)
	{
		printf("Error: Invalid bit index\n");
		return (-1);
	}

	mask = 1UL << index;
	bit_value = (n & mask) != 0;

	return (bit_value);
}
