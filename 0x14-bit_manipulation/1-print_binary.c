#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n : the number
 * Return: the binary value
 */
void print_binary(unsigned long int n)
{
	int lead_zeroes = 1;
	unsigned long int mask;

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask != 0)
	{
		if ((n & mask) != 0)
			lead_zeroes = 0;

		if (!lead_zeroes)
			printf("%d", (n & mask) != 0);

		mask >>= 1;
	}
	if (lead_zeroes)
		printf("0");
}
