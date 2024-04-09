#include "search_algos.h"
/**
 * linear_search - This function looks  for a value in an array
 * of integers using the Linear search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: The first index where the value is located
 * or -1 if the value is not found or if the array is NULL.
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i <(int)size; i++)
	{
		printf("Value checked: i = %d, array[i] = %d\n", i, array[i]);
		if (array[i] == value)
	{
		printf("Found %d at index: %d\n", value, i);
		return (i);
	}
	}
	return (-1);
}

