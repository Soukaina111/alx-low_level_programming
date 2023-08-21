#include <stdio.h>

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 */
void rev_string(char *s)
{
	int length = 0;
	char temp;
	int i, j;

	/* Calculate the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Reverse the string using two-pointer technique */
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		/* Swap characters */
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
