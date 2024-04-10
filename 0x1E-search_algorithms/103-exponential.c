
#include "search_algos.h"

/**
  * binary_search2 - Searches for a value in a sorted array
  * @array: A pointer to the first element of the array to search.
  * @ga:The starting index of the [sub]array to search.
  * @dr: The ending index of the [sub]array to search.
  * @value: The value to search for.
  * Return: If the value is not present or the array is NULL, -1.
  * Description: Prints the [sub]array being searched after each change.
  */
int binary_search2(int *array, size_t ga, size_t dr, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (dr >= ga)
	{
		printf("Searching in array: ");
		for (i = ga; i < dr; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = ga + (dr - ga) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			dr = i - 1;
		else
			ga = i + 1;
	}

	return (-1);
}

/**
  * exponential_search - This function Searches for a value in a sorted array
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  * Return: If the value is not present or the array is NULL, -1.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, droit;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	droit = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, droit);
	return (binary_search2(array, i / 2, droit, value));
}

