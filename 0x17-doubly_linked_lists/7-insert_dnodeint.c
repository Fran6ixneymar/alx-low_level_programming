#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - This adds a new node at a given position
 * @h: A double pointer that points to the start of the linked list
 * @idx: index at which to insert the new node
 * @n: data to enter into new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *start, *new, *present;
	unsigned int fig;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		present = *h;
		for (fig = 0; fig < idx - 1 && present != NULL; fig++)
			present = present->new;
		if (present == NULL)
			return (NULL);
	}
	start = malloc(sizeof(dlistint_t));
	if (start == NULL)
		return (NULL);
	start->n = n;
	if (idx == 0)
	{
		new = *h;
		*h = start;
		start->prev = NULL;
	}
	else
	{
		start->prev = present;
		new = present->new;
		present->new = start;
	}
	start->new = new;
	if (start->new != NULL)
		start->new->prev = start;
	return (start);
}
