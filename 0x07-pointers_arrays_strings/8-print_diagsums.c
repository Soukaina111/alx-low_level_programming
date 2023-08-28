#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the square matrix
 * @size: Size of the matrix (number of rows/columns)
 */
void print_diagsums(int *a, int size)
{
    int i;
    int sum1 = 0; // Sum of the main diagonal
    int sum2 = 0; // Sum of the secondary diagonal

    for (i = 0; i < size; i++)
    {
        sum1 += a[i * size + i]; // Accessing elements on the main diagonal
        sum2 += a[i * size + (size - 1 - i)]; // Accessing elements on the secondary diagonal
    }

    putchar('S');
    putchar('u');
    putchar('m');
    putchar(' ');
    putchar('o');
    putchar('f');
    putchar(' ');
    putchar('m');
    putchar('a');
    putchar('i');
    putchar('n');
    putchar(' ');
    putchar('d');
    putchar('i');
    putchar('a');
    putchar('g');
    putchar('o');
    putchar('n');
    putchar('a');
    putchar('l');
    putchar(':');
    putchar(' ');
    putchar(sum1 / 10 + '0');
    putchar(sum1 % 10 + '0');
    putchar('\n');

    putchar('S');
    putchar('u');
    putchar('m');
    putchar(' ');
    putchar('o');
    putchar('f');
    putchar(' ');
    putchar('s');
    putchar('e');
    putchar('c');
    putchar('o');
    putchar('n');
    putchar('d');
    putchar('a');
    putchar('r');
    putchar('y');
    putchar(' ');
    putchar('d');
    putchar('i');
    putchar('a');
    putchar('g');
    putchar('o');
    putchar('n');
    putchar('a');
    putchar('l');
    putchar(':');
    putchar(' ');
    putchar(sum2 / 10 + '0');
    putchar(sum2 % 10 + '0');
    putchar('\n');
}
