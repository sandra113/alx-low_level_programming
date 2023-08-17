#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a linked list
 * @h: the first node of the list
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
