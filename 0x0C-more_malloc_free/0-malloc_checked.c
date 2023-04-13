#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/*
 * malloc_checked - allocates memory
 * @b: bytes to allocate 
 *
 * Return: a pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return(a);
}
