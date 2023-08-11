#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: This program prints the alphabet in lowercase,
* followed by uppercase, and then a new line,
* using the putchar function.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char letter;
/* Print lowercase alphabet */
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}

/* Print uppercase alphabet */
for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter);
}

putchar('\n');

return (0);
}
