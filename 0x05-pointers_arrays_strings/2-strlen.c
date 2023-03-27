#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns length of a string
 * @s: character to check
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int a = 0; /* start the counter from 0 */

	for (; *s++;)
		a++;
	return (a);
}
