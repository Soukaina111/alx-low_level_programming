#include "search_algos.h"

/**
 * linear_skip - This function looks for a value in a skip list
 * @list: input list
 * @value: value to search in
 * Return: index of the number
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *H;

	if (list == NULL)
		return (NULL);

	H = list;

	do {
		list = H;
		H = H->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)H->index, H->n);
	} while (H->express && H->n < value);

	if (H->express == NULL)
	{
		list = H;
		while (H->next)
			H = H->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)H->index);

	while (list != H->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
