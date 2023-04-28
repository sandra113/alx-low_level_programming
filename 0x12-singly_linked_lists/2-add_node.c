#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of  a list
 * @str: new element
 * @head: the first node of the list
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len2;

	for (len2 = 1; str[len2] != '\0'; len2++)

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len2;
	new_node->next = (*head);

	(*head) = new_node;
	return (*head);
}
