#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - This displays all the elements of a dlistint_t list
 * @h: Points to the head of the linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t fig;

	for (fig = 0; h != NULL; fig++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (fig);
}
