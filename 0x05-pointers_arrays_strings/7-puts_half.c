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
    int start_index;

    if (length % 2 == 0)
    {
        start_index = length / 2;
    }
    else
    {
        start_index = (length - 1) / 2;
    }

    for (int i = start_index; i < length; i++)
    {
        printf("%c", str[i]);
    }

    printf("\n");
}
