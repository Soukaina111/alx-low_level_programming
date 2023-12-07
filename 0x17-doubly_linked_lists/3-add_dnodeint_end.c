#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the first element of the list.
 * @n: int to set in the new node.
 * Return: address of the new element, or NULL if it failed
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last, *tmp = *head;

	last = malloc(sizeof(dlistint_t));
	if (last == NULL)
		return (NULL);
	last->n = n;
	last->next = NULL;

	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		last->prev = tmp;
		tmp->next = last;
	}
	else
	{
		*head = last;
		last->prev = NULL;
	}

	return (last);
}
