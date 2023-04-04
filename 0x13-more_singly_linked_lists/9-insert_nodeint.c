#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int fig;
listint_t *start;
listint_t *temp = *head;

start = malloc(sizeof(listint_t));
if (!start || !head)
return (NULL);

start->n = n;
start->next = NULL;

if (idx == 0)
{
start->next = *head;
*head = start;
return (start);
}

for (fig = 0; temp && fig < idx; fig++)
{
if (fig == idx - 1)
{
start->next = temp->next;
temp->next = start;
return (start);
}
else
temp = temp->next;
}

return (NULL);
}

