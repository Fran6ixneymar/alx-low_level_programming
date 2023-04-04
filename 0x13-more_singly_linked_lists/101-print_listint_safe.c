#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _r - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 *
 * Return: pointer to the new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **start;
	size_t fig;

	start = malloc(size * sizeof(listint_t *));
	if (start == NULL)
	{
		free(list);
		exit(98);
	}
	for (fig = 0; fig < size - 1; fig++)
		start[fig] = list[fig];
	start[fig] = new;
	free(list);
	return (start);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t fig, figure = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (fig = 0; fig < figure; fig++)
		{
			if (head == list[fig])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (figure);
			}
		}
		figure++;
		list = _r(list, figure, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (figure);
}
