#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * This program assigns a random number to the variable 'n' each time it is executed.
 * It then prints the last digit of 'n' along with an appropriate message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    int lastDigit = abs(n % 10);

    printf("Last digit of %d is %d ", n, lastDigit);

    if (lastDigit > 5)
    {
        printf("and is greater than 5\n");
    }
    else if (lastDigit == 0)
    {
        printf("and is 0\n");
    }
    else
    {
        printf("and is less than 6 and not 0\n");
    }

    return (0);
}
