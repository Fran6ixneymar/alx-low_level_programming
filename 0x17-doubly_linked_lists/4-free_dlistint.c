#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - This frees a dlistint_t list
 * @head: Points to the beginning of the linked list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	while (head != NULL)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
