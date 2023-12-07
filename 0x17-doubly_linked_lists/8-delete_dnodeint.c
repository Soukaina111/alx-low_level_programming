#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @head: pointer to the list.
 * @index: position of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp_node = *head;
	dlistint_t *to_del = *head;
	unsigned int idx;
	unsigned int cpt = 0;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		*head = to_del->next;
		free(to_del);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	idx = index - 1;
	while (tmp_node && cpt != idx)
	{
		cpt++;
		tmp_node = tmp_node->next;
	}
	if (cpt == idx && tmp_node)
	{
		to_del = tmp_node->next;
		if (to_del->next)
		to_del->next->prev = tmp_node;
		tmp_node->next = to_del->next;
		free(to_del);
		return (1);
	}

	return (-1);
}
