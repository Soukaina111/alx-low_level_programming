#include <stdio.h>

/**
 * puts2 - Prints every other character of a string,
 *  starting with the first character,
 *  followed by a new line.
 * @str: Pointer to the string to be printed.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i += 2;

		if (str[i] == '\0')
			break;
	}

	printf("\n");
}
