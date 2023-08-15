#include <stdio.h>

/**
 * times_table - Prints the 9 times table.
 */
void times_table(void)
{
	int multiplicand, multiplier, product;

	for (multiplicand = 0; multiplicand <= 9; multiplicand++)
	{
		for (multiplier = 0; multiplier <= 9; multiplier++)
		{
			product = multiplicand * multiplier;
			printf("%d ", product);
		}
		putchar('\n');
	}
}
