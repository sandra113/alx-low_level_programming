#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the node of listint_t
 * @head: is a pointer to listint_t
 * @index: index of the node, starting at 0
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *n = head;

	while (n != NULL)
	{
		if (count == index)
		{
			return (n);
		}
		count++;
		n = n->next;
	}
	return (NULL);
}
