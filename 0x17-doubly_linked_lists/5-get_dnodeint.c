#include "lists.h"

/**
 * get_dnodeint_at_index - This finds a specific node of a linked list
 *
 * @head: Points to the beginning of the list
 * @index: index of the node to retrieve
 *
 * Return: pointer to the indexed node, or NULL on failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int fig;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	for (fig = 0; i < index; fig++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
