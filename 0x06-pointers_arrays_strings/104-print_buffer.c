#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - Prints the content of a buffer.
 * @b: Pointer to the buffer.
 * @size: Number of bytes to print.
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j;
	char ch;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%02x", *(unsigned char *)(b + j));
			else
				printf("  ");

			if (j % 2)
				putchar(' ');
		}

		for (j = i; j < i + 10; j++)
		{
			if (j >= size)
				break;

			ch = *(b + j);
			if (isprint(ch))
				putchar(ch);
			else
				putchar('.');
		}

		putchar('\n');
	}
}
