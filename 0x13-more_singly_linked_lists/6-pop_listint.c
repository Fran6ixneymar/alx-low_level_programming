#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - removes the head node
 * @head: a double pointer
 *
 *Return: empty
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int fig;

	if (head == NULL || *head == NULL)
		return (0);
	new = *head;
	*head = new->next;
	fig = new->n;
	free(new);
	return (fig);
}
