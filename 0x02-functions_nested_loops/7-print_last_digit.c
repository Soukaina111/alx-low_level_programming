#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
    int last_digit = n % 10;

    /* Handle negative numbers */
    if (last_digit < 0)
        last_digit = -last_digit;

    putchar(last_digit + '0');
    putchar('\n');

    return last_digit;
}
