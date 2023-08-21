#include <stdio.h>

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
    int length = 0;
    int i = 0;

    /* Calculate the length of the string */
    while (str[length] != '\0')
        length++;

    /* Determine the starting index for the second half */
    int start_index = (length - 1) / 2;

    /* Print the second half of the string */
    while (str[start_index] != '\0')
    {
        putchar(str[start_index]);
        start_index++;
    }

    putchar('\n');
}
