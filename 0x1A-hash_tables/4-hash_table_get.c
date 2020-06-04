#include "hash_tables.h"

/**
 * hash_table_get - gets the value associated with a key in a hash table
 * @ht: pointer to hash table
 * @key: key, string
 * Return: description
 **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL || strlen(key) == 0)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	node = ht->array[i];

	while (node)
	{
		if (node->key && strcmp(key, (const char *)node->key) == 0)
			return (node->value);

		node = node->next;
	}

	return (NULL);
}
