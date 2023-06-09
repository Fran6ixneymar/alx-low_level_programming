#include "hash_tables.h"

/**
 * hash_djb2 - This is the implementation of the djb2 algorithm
 * @str: This string used to generate hash value
 *
 * Return: The hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int fig;

	hash = 5381;
	while ((fig = *str++))
	{
		hash = ((hash << 5) + hash) + fig; /* hash * 33 + fig */
	}
	return (hash);
}
