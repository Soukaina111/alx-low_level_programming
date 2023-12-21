#include "hash_tables.h"

/**
 * hash_table_create - implments a hash table.
 * @size: the node size.
 *
 * Return: a pointer to the implemented hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int cpt = 0;
	hash_table_t *new = malloc(sizeof(hash_table_t));

	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	new->size = size;
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new->array == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	while (cpt < size) 
	{
    	new->array[cpt] = NULL;
    		cpt++;
	}

	return (new);
}
