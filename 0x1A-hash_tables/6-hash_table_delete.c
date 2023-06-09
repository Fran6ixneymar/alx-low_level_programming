#include "hash_tables.h"

/**
 * hash_table_delete - This deletes a hash table
 * @ht: The hash table to delete
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int fig;
	hash_node_t *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (fig = 0; fig < ht->size; fig++)
	{
		while (ht->array[fig] != NULL)
		{
			next = ht->array[fig]->next;
			free(ht->array[fig]->key);
			free(ht->array[fig]->value);
			free(ht->array[fig]);
			ht->array[fig] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
