#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * string_nconcat - concatenates two string
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: pointer to the new allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pp;
	size_t lenS1;
	size_t lenS2;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lenS1 = strlen(s1);
	lenS2 = strlen(s2);

	if (n >= lenS2)
		n = lenS2;
	pp = malloc(lenS1 + n + 1);
	if (!pp)
		return (NULL);

	memcpy(pp, s1, lenS1);
	memcpy(pp + lenS1, s2, n);
	pp[lenS1 + n] = '\0';

	return (pp);
}
