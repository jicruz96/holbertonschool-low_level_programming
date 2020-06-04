#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to head table
 * Return: void
 **/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		node = ht->array[i++];
		while (node)
		{
			free(node->key);
			free(node->value);
			free(tmp);
			tmp = node;
			node = node->next;
		}
		free(tmp);
		tmp = NULL;
	}
	free(ht->array);
	free(ht);
}
