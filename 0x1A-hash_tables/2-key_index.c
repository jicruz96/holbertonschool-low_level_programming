#include "hash_tables.h"

/**
 * key_index - returns index of a key
 * @key: key used to generate index number
 * @size: size of hash table
 * Return: description
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
