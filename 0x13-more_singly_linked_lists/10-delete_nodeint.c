#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index
 * @head: a double pointer to listint_t
 * @index: the index where the new node is added
 * Return: 1 Success and -1 (fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *prev = NULL;
	listint_t *del_node = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = del_node->next;
		free(del_node);
		return (0);
	}

	while (index != 0 && del_node != NULL)
	{
		prev = del_node;
		del_node = del_node->next;
		index--;
	}
	if (del_node == NULL)
		return (-1);

	prev->next = del_node->next;
	free(del_node);
	return (1);
}
