#include "search_algos.h"
#include <math.h>

/**
 * jump_search - This function lookss for a value in a sorted array
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
    int currentIndex, jumpStep, stepCount, previousIndex;

    if (array == NULL || size == 0)
        return -1;

    jumpStep = (int)sqrt((double)size);
    stepCount = 0;
    previousIndex = currentIndex = 0;

    do {
        printf("Value checked array[%d] = [%d]\n", currentIndex, array[currentIndex]);

        if (array[currentIndex] == value)
            return currentIndex;
        stepCount++;
        previousIndex = currentIndex;
        currentIndex = stepCount * jumpStep;
    } while (currentIndex < (int)size && array[currentIndex] < value);

    printf("Value found between indexes [%d] and [%d]\n", previousIndex, currentIndex);

    for (; previousIndex <= currentIndex && previousIndex < (int)size; previousIndex++)
    {
        printf("Value checked array[%d] = [%d]\n", previousIndex, array[previousIndex]);
        if (array[previousIndex] == value)
            return previousIndex;
    }

    return -1;
}

