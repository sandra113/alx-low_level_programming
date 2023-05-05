#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits to flip
 * to get from one number to another
 * @n: first number
 * @m: Second number
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference;
	unsigned int i = 0;

	difference = n ^ m; /*XOR the two numbers to get the difference*/
	while (difference != 0)
	{
		/* add 1 to i if the lowest bit of difference is 1 */
		i += (difference & 1);
		difference >>= 1;
	}

	return (i);
}
