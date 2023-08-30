#include <stdio.h>

/**
 * wildcmp - Compares two strings and determines if they can be considered identical.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: 1 if s1 and s2 can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	/* If both strings are empty, they are considered identical*/
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If the current characters match or s2 has a wildcard '*'*/
	if (*s1 == *s2 || *s2 == '*')
	{
		/* Recursively compare the remaining characters*/
		if (wildcmp(s1 + 1, s2 + 1))
			return (1);
		/* If the wildcard '*' matches an empty string, skip one character in s1*/
		if (*s2 == '*' && wildcmp(s1 + 1, s2))
			return (1);
	}
	return (0);
}
