#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point of the program
 *
 * This function initializes a variable 'n' with a random number and
 * determines whether the number is positive, zero, or negative.
 * It then prints the result using the printf function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n == 0)
    {
        printf("%d is zero\n", n);
    }
    else
    {
        printf("%d is negative\n", n);
    }
    return (0);
}
