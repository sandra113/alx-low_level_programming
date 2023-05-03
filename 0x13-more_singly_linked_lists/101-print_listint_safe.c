#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t i;

	slow = fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			i++;
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;

			while (slow != fast)
			{
				printf("[%p] %d\n", (void *)slow, slow->n);
				i++;
				slow = slow->next;
			}
			printf("[%p] %d\n", (void *)slow, slow->n);
			break;
		}
		i++;
	}
	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		i++;
		slow = slow->next;
	}

	return (i);
}
