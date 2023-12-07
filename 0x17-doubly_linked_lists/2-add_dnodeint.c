#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to the first element of the list.
 * @n: int to set in the new node.
 * Return: address of the new element, or NULL if it failed
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *list2;

	list2 = malloc(sizeof(dlistint_t));
	if (list2 == NULL)
		return (NULL);

	list2->n = n;
	list2->prev = NULL;
	list2->next = *head;
	if (*head)
		(*head)->prev = list2;
	*head = list2;

	return (list2);
}
