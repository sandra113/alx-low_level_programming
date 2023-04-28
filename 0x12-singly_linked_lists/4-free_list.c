#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list -frees a list
 * @head: - pointer to the list
 */
void free_list(list_t *head)
{
	list_t *s;

	while (head != NULL)
	{
		s = head->next;
		free(head->str);
		free(head);
		head = s;
	}
}
