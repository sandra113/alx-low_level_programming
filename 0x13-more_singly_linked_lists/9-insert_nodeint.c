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


	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	idx--;
	while (idx != 0)
	{
		ptr = ptr->next;
		idx--;
	}
	tmp->next = ptr->next;
	ptr->next = tmp;
	return (tmp);
}
