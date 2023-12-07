#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node node at a given position
 * in a dlistint_t list.
 * @h: pointer to the list.
 * @idx: position to add the node.
 * @n: data for the new node.
 * Return: the address of the new node, or NULL if it failed
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp_node = *h, *new;
	unsigned int index, cpt = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		add_dnodeint(new, n);
	}
	index = idx - 1;
	while (tmp_node && cpt != index)
	{
		cpt++;
		tmp_node = tmp_node->next;
	}
	if (cpt == index && tmp_node)
	{
		new_node->prev = tmp_node;
		new->next = aux_node->next;
		if (tmp_node->next)
			tmp_node->next->prev = new;
		tmp_node->next = new;
		return (new);
	}
	free(new);
	return (NULL);
}
