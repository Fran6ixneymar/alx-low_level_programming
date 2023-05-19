#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - This deletes a node at a specific index
 * @head: A double pointer that points to the linked list
 * @index: index at which to delete node
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *present;
	unsigned int fig;

	if (head == NULL || *head == NULL)
		return (-1);
	present = *head;
	if (index == 0)
	{
		*head = present->next;
		if (present->next != NULL)
		{
			present->next->prev = NULL;
		}
		free(present);
		return (1);
	}
	for (fig = 0; fig < index; fig++)
	{
		if (present->next == NULL)
			return (-1);
		present = present->next;
	}
	present->prev->next = present->next;
	if (present->next != NULL)
		present->next->prev = present->prev;
	free(present);
	return (1);
}
