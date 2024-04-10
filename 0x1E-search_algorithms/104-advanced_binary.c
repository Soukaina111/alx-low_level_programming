#include "search_algos.h"

/**
 * alg_search - This function searches
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int alg_search(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (mid && size % 2 == 0)
		mid--;

	if (value == array[mid])
	{
		if (mid > 0)
			return (alg_search(array, mid + 1, value));
		return ((int)mid);
	}
	if (value < array[mid])
		return (alg_search(array, mid + 1, value));

	mid++;
	return (alg_search(array + mid, size - mid, value) + mid);
}

/**
 * advanced_binary - This fucntion calls alg_search
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = alg_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
