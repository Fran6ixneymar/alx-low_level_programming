#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a linked list
 *
 * @head: pointer to the listint_t list to be freed
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
 listint_t *new;

 if (head == NULL)
 return;

 while (*head)
 {
 new = (*head)->next;
 free(*head);
 *head = new;
 }

 *head = NULL;
}

