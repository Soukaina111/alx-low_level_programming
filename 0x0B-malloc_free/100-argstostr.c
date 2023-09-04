#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *stri;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	stri = malloc(sizeof(char) * l + 1);
	if (stri == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		stri[r] = av[i][n];
		r++;
	}
	if (stri[r] == '\0')
	{
		stri[r++] = '\n';
	}
	}
	return (stri);
}

