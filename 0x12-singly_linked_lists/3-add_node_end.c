#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of  a list
 * @str: new element
 * @head: the first node of the list
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;

	last_node = (*head);
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = (NULL);

	if (*head == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}
	while (last_node->next)
		last_node = last_node->next;
	last_node->next = new_node;
	return (new_node);
}
