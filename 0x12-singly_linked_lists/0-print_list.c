#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of list_t
 * @h: elements of list_t
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;

	if (h->str == NULL)
	{
		printf("[0](nil)\n");
	}

	while (h != NULL)
	{
		printf("[%u]%s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
