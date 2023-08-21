#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers,
 * followed by a new line.
 * @a: Pointer to the array of integers.
 * @n: Number of elements to be printed.
 */
void print_array(int *a, int n)
{
    if (n <= 0)
        return;

    int i = 0;
    printf("%d", a[i]);
    i++;

    while (i < n)
    {
        printf(", %d", a[i]);
        i++;
    }

    printf("\n");
}
