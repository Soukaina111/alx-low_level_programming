#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints the second half of a string,
 * followed by a new line.
 * @str: Pointer to the string to be printed.
 */
void puts_half(char *str)
{
int length = strlen(str);
int start_index
int i;

if (length % 2 == 0)
{
start_index = length / 2;
}
else
{
start_index = (length - 1) / 2;
}

i = start_index;
while (str[i] != '\0')
{
printf("%c", str[i]);
i++;
}

printf("\n");
}
