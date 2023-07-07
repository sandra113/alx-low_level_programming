#include <stdio.h>
#include "main.h"

/**
 * flip_bits - calculates the number of bits flipped to get to a number
 * @n: the first number
 * @m: the second number
 * Return: the new value
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusiveOR = n ^ m;
	unsigned int count = 0;

	while (exclusiveOR != 0)
	{
		count += exclusiveOR & 1;
		exclusiveOR >>= 1;
	}

	return (count);
}
