#include "lists.h"

/**
 * sum_listint -total of all data (n) of a listint_t linked list.
 * @head: pointer to the first node
 *
 * Return: total of all the data
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
