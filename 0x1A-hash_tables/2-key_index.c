#include "hash_tables.h"

/**
 * key_index - key index
 * @key: the string.
 * @size: the size of the hash table.
 *
 *returns the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
