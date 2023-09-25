#include "lists.h"

listint_t *create_new_node(int n)
{
    listint_t *new = malloc(sizeof(listint_t));
    if (new)
    {
        new->n = n;
        new->next = NULL;
    }
    return new;
}

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    if (!head)
        return NULL;

    if (idx == 0)
    {
        listint_t *new = create_new_node(n);
        if (new)
        {
            new->next = *head;
            *head = new;
            return new;
        }
        return NULL;
    }

    listint_t *current = *head;
    unsigned int i;
    for (i = 0; current && i < idx - 1; i++)
    {
        current = current->next;
    }

    if (current)
    {
        listint_t *new = create_new_node(n);
        if (new)
        {
            new->next = current->next;
            current->next = new;
            return new;
        }
    }

    return NULL;
}
