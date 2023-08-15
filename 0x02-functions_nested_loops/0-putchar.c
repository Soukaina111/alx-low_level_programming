#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char string[] = "_putchar";
	int length = sizeof(string) - 1;

	for (int i = 0; i < length; i++)
	{
		putchar(string[i]);
	}

	putchar('\n');

	return (0);
}
