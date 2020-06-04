#include "hash_tables.h"

/**
 * hash_table_set - stores a key/value pair in a hash table
 * @ht: pointer to hash table
 * @key: key, non-empy string.
 * @value: value, string.
 * Return: 1 if successful | 0 if failed
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new;

	if (ht == NULL || strlen(key) == 0 || ht->array == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);

	if (ht->array[i])
		new->next = ht->array[i]->next;
	else
		new->next = NULL;

	ht->array[i] = new;

	return (1);
}
