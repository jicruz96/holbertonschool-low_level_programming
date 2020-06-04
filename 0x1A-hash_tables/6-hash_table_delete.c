#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to head table
 * Return: void
 **/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node = NULL;
	hash_node_t *tmp = NULL;
	unsigned long int i = 0;

	/* Return NULL if ht points to nothing */
	if (ht == NULL)
		return;

	/* Iterate through array */
	for (; i < ht->size; i++)
	{
		node = ht->array[i];
		/* Free nodes */
		while (node)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}
	/* Free hash table */
	free(ht->array);
	free(ht);
}
