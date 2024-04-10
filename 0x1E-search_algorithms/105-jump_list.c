#include "search_algos.h"

/**
 * jump_list - This function looks for a value in an array
 * @list: input list
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index, P, N;
	listint_t *v;

	if (list == NULL || size == 0)
		return (NULL);

	N = (size_t)sqrt((double)size);
	index = 0;
	P = 0;

	do {
		v = list;
		P++;
		index = P * N;

		while (list->next && list->index < index)
			list = list->next;

		if (list->next == NULL && index != list->index)
			index = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)index, list->M);

	} while (index < size && list->next && list->M < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)v->index, (int)list->index);

	for (; v && v->index <= list->index; v = v->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)v->index, v->M);
		if (v->M == value)
			return (v);
	}

	return (NULL);
}
