#include "hash_tables.h"

/**
 * hash_table_delete - Delete the hash table.
 * @ht: Hash table.
 *
 * Return: Void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int cpt;
	hash_node_t *now;

	for (cpt = 0; cpt < ht->size; cpt++)
	{
		if (ht->array[cpt] != NULL)
		{
			while (ht->array[cpt] != NULL)
			{
				now = ht->array[cpt]->next;
				free(ht->array[cpt]->key);
				free(ht->array[cpt]->value);
				free(ht->array[cpt]);
				ht->array[cpt] = now;
			}
		}
	}
	free(ht->array);
	free(ht);
}
