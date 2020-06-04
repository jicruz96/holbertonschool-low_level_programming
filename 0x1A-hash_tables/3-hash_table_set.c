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

	for (new = ht->array[i]; new; new = new->next)
		if (strcmp((const char *)new->key, key) == 0)
		{
			free(new->value);
			new->value = strdup(value);
			return (1);
		}

	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	if (ht->array[i])
		new->next = ht->array[i];

	ht->array[i] = new;

	return (1);
}
