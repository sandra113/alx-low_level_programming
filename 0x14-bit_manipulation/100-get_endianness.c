#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int value = 1;
	char *byte = (char *)&value;

	return ((int)*byte);
}
