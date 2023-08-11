#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of two two-digit
 *              numbers, separated by a space, in ascending order with two
 *              digits for each number. The combinations are printed using the
 *              putchar function. It uses the putchar function eight times
 *              maximum.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_number;
	int second_number;

	for (first_number = 0; first_number <= 99; first_number++)
	{
		for (second_number = 0; second_number <= 99; second_number++)
		{
			/* Print first number */
			putchar((first_number / 10) + '0');
			putchar((first_number % 10) + '0');

			/* Print space separator */
			putchar(' ');

			/* Print second number */
			putchar((second_number / 10) + '0');
			putchar((second_number % 10) + '0');

			if (first_number != 99 || second_number != 99)
			{
				/* Print comma */
				putchar(',');
				/* Print space separator */
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
