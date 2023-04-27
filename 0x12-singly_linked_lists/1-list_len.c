#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - calculates the number of elements in a list
 * @h: list elements
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
