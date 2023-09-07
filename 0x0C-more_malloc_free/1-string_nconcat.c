#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, lenA = 0, lenB = 0;

	while (s1 && s1[lenA])
		lenA++;
	while (s2 && s2[lenB])
		lenB++;

	if (n < lenB)
		s = malloc(sizeof(char) * (lenA + n + 1));
	else
		s = malloc(sizeof(char) * (lenA + lenB + 1));

	if (!s)
		return (NULL);

	while (i < lenA)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < lenB && i < (lenA + n))
		s[i++] = s2[j++];

	while (n >= lenB && i < (lenA + lenB))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}

