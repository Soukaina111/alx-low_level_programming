#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number.
 * @num: The number.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	printf("Last digit: %d\n", last_digit);

	return last_digit;
}
