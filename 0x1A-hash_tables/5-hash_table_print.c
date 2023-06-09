#include "hash_tables.h"

/**
 * hash_table_print - This prints a hash table
 * @ht: The hash table to be printed
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int fig;
	hash_node_t *tmp;
	char flag = 0; /* 0 while no data has been printed yet */

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (fig = 0; fig < ht->size; fig++)
	{
		tmp = ht->array[fig];
		while (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
