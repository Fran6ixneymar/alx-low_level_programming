#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
size_t list = 0;
int dist;
listint_t *start;

if (!h || !*h)
return (0);

while (*h)
{
dist = *h - (*h)->next;
if (dist > 0)
{
start = (*h)->next;
free(*h);
*h = start;
list++;
}
else
{
free(*h);
*h = NULL;
list++;
break;
}
}

*h = NULL;

return (list);
}
