#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *New;
	listint_t *Temp = *head;

	New = malloc(sizeof(listint_t));
	if (!New)
		return (NULL);

	New->n = n;
	New->next = NULL;

	if (*head == NULL)
	{
		*head = New;
		return (New);
	}

	while (Temp->next)
		Temp = Temp->next;

	Temp->next = New;

	return (New);
}
