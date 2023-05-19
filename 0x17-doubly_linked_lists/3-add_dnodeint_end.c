#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - This adds a node to the end of a linked list
 * @head: A double pointer that points to the beginning of the linked list
 * @n: Adds value to the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *start, *temp;

	if (head == NULL)
		return (NULL);
	start = malloc(sizeof(dlistint_t));
	if (start == NULL)
		return (NULL);
	start->n = n;
	start->next = NULL;
	if (*head == NULL)
	{
		start->prev = NULL;
		*head = start;
		return (start);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = start;
	start->prev = temp;
	return (start);
}
