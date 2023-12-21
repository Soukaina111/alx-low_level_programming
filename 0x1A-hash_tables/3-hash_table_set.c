#include "hash_tables.h"
/**
 * free_node - Free a node.
 * @node: Node to free.
 *
 * Return: Void.
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
/**
 * hash_table_set - Set a value in the hash table.
 * @ht: Hash table.
 * @key: to be indexed.
 * @value: Value to set .
 *
 * Return: 1 if works, 0 if doesn't.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *now;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup((char *)key);
	new_node->value = strdup((char *)value);
	new_node->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		now = ht->array[index];
		if (strcmp(now->key, key) == 0)
		{
			new_node->next = now->next;
			ht->array[index] = new_node;
			free_node(now);
			return (1);
		}
		while (now->next != NULL && strcmp(now->next->key, key) != 0)
		{ now = now->next;
		}
		if (strcmp(now->key, key) == 0)
		{
			new_node->next = now->next->next;
			free_node(now->next);
			now->next = new_node;
		}
		else
		{
			new_node->next = ht->array[index];
			ht->array[index] = new_node;
		}
	}
	return (1);
}
