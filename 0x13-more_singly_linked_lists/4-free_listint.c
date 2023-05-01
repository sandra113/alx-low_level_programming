#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees listint_t
 * @head: pointer to listint
 */
void free_listint(listint_t *head)
{
	listint_t *s;

	while (head)
	{
		s = head->next;
		free(head);
		head = s;
	}
}
