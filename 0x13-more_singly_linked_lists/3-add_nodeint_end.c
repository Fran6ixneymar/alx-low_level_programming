#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node at the end of listint_t list
 * @head: pointer to the first element
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
 listint_t *start;
 listint_t *temp = *head;

 start = malloc(sizeof(listint_t));
 if (!start)
 return (NULL);

 start->n = n;
 start->next = NULL;

 if (*head == NULL)
 {
 *head = start;
 return (start);
 }

 while (temp->next)
 temp = temp->next;

 temp->next = start;

 return (start);
}

