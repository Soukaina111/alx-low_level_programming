#include "search_algos.h"

/**
 * interpolation_search - This function searches for a value in an array
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t k, first, last;
	double d;

	if (array == NULL)
		return (-1);

	first = 0;
	last = size - 1;

	while (size)
	{
		d = (double)(last - first) / (array[last] - array[first])
			* (value - array[first]);
		k = (size_t)(first + d);
		printf("Value checked array[%d]", (int)k);

		if (k >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[k]);
		}

		if (array[k] == value)
			return ((int)k);

		if (array[k] < value)
			first = k + 1;
		else
			first = k - 1;

		if (first == last)
			break;
	}

	return (-1);
}
