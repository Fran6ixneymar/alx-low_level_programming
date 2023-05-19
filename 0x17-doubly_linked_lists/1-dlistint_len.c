#include "lists.h"

/**
 * dlistint_len - The number of nodes to be counted in the linked list
 * @h: Points to the start of a linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t fig;

	for (fig = 0; head != NULL; fig++)
		head = head->next;
	return (head);
}
