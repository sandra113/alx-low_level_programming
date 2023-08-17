#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t
 * @head: the first node of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next; /* store the next node in temp and free the current node*/
		free(head);
		head = temp; /*go to the next node*/
	}
}
