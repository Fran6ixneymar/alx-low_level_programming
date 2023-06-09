#include "hash_tables.h"

/**
 * hash_table_get - This retrieves a value associated with a key
 * @ht: The table were the value is to be retrieved
 * @key: key to find value
 *
 * Return: The value associated with key, or NULL if key cannot be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int start;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);
	start = key_start((const unsigned char *)key, ht->size);
	tmp = ht->array[start];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
