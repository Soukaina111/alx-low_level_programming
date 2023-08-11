#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all the numbers of base 16 in lowercase,
 *              followed by a new line, using the putchar function.
 *              It uses the putchar function only three times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 16; number++)
	{
		if (number < 10)
			putchar(number + '0');
		else
			putchar(number - 10 + 'a');
	}

	putchar('\n');

	return (0);
}
