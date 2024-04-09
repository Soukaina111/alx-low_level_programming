#include "search_algos.h"

/**
 * binary_search - This function looks for a value in a sorted
 * array of integers using the Binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: The index where the value is located
 * or -1 if the value is not found or if the array is NULL.
 */

int binary_search(int *array, size_t size, int value)
{
	int gauche = 0;
	int droit = size - 1;
	int half;
	int i;

	if (array == NULL)
	{
		return (-1);
	}
	while (gauche <= droit)
	{
		half = gauche + (droit - gauche) / 2;
		printf("Searching in array: ");
		for (i = gauche; i <= droit; i++)
		{
			printf("%d", array[i]);
			if (i != droit)
			{
				printf(", ");
			}
		}
		printf("\n");
		if (array[half] == value)
		{
			return (half);
		}
		else if (array[half] < value)
		{
			gauche = half + 1;
		}
		else
		{
			droit = half - 1;
		}
	}
	return (-1);
}

