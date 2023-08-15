#include <stdio.h>

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase
 * ten times followed by a new line
 */
void print_alphabet_x10(void)
{
int count = 0;
char letter = 'a';
while (count < 10)
   {
while (letter <= 'z')
        {
putchar(letter);
letter++;
        }

count++;
letter = 'a';/* Reset letter to 'a' for the next iteration */

putchar('\n');
    }
}
