#include "hash_tables.h"

/**
 * hash_table_print - print elements in a hash table
 * @ht: pointer to hash table
 * Return: void
 **/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, print_comma = 0;
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	putchar('{');

	for (i = 0; i < ht->size; i++)
		if (ht->array[i])
		{
			tmp = ht->array[i];
			while (tmp)
			{
				if (print_comma)
					printf(", ");
				else
					print_comma = 1;
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
			}
		}

	printf("}\n");
}
