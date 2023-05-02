#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at index
i * @head: a double pointer to listint_t
 * @idx: the index where the new node is added
 * @n: value of the new node
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *ptr = *head;
	listint_t *tmp;

	if (head == NULL)
		return (NULL);

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	if (idx == 0)
	{
		tmp->next = *head;
		*head = tmp;
		return (tmp);
	}

	while (idx > 1 && ptr != NULL)
	{
		ptr = ptr->next;
		idx--;
	}
	if (ptr == NULL)
	{
		free(tmp);
		return (NULL);
	}
	
	tmp->next = ptr->next;
	ptr->next = tmp;
	return (tmp);
}
