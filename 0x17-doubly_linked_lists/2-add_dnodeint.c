#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - This adds a new node at the beginning of the linked list
 * @head: A double pointer that points to the beginning of the linked list
 * @n: Adds value to the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *start;

	if (head == NULL)
		return (NULL);
	start = malloc(sizeof(dlistint_t));
	if (start == NULL)
		return (NULL);
	start->n = n;
	start->prev = NULL;
	start->next = *head;
	*head = start;
	if (start->next != NULL)
		(start->next)->prev = start;
	return (start);
}
