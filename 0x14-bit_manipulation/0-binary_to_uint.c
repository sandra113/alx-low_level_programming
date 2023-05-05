#include <stdio.h>
#include <string.h>
#include "main.h"


/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	unsigned int value = 1;
	int len, i;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '1')
		{
			total += value;
		}
		else if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		value *= 2;
	}
	return (total);
}
