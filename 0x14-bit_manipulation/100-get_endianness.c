#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the enduanes
 * Return: 0 (big endian), 1 (little endian)
 */

int get_endianness(void)
{
	int n = 1;
	char *p;

	/*check the first byte of the test value*/
	p = (char *)&n;

	/*it is little endian if the first byte is 1*/

	if (*p == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
