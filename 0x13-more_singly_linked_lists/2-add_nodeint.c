#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - adds a new node at beginning of a listint_t list.
  *
  * @head: head of double pointer
  * @n: int add the list
  * Return: NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *start;

	if (head == NULL)
		return (NULL);
	start = malloc(sizeof(listint_t));
	if (start == NULL)
		return (NULL);
	start->n = n;
	start->next = *head;
	*head = start;
	return (start);
}
