#include "lists.h"

/**
 * get_nodeint_at_index - displays the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the index node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int fig = 0;
listint_t *start = head;

while (start && fig < index)
{
start = start->next;
fig++;
}

return (start ? start : NULL);
}
