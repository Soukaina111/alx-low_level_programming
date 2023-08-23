#include <stdio.h>

/**
 * infinite_add - Adds two numbers.
 * @n1: Pointer to the first number.
 * @n2: Pointer to the second number.
 * @r: Buffer to store the result.
 * @size_r: Size of the buffer.
 *
 * Return: Pointer to the result or 0 if result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int i, j, k;
	int len_n1 = 0, len_n2 = 0, max_len = 0, sum = 0;

	for (len_n1 = 0; n1[len_n1] != '\0'; len_n1++)
		;
	for (len_n2 = 0; n2[len_n2] != '\0'; len_n2++)
		;

	if (len_n1 >= len_n2)
		max_len = len_n1;
	else
		max_len = len_n2;

	if (size_r <= max_len + 1)
		return (0);

	r[max_len + 1] = '\0';

	for (i = len_n1 - 1, j = len_n2 - 1, k = max_len; k >= 0; i--, j--, k--)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		r[k] = sum % 10 + '0';
		carry = sum / 10;
	}

	if (carry)
	{
		if (size_r <= max_len + 2)
			return (0);

		for (i = max_len; i >= 0; i--)
			r[i + 1] = r[i];

		r[0] = carry + '0';
	}

	return (r);
}
