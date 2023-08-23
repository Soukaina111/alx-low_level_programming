#include <stdlib.h>
#include <string.h>

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to concatenate from src.
 *
 * Return: Pointer to the resulting string (dest).
 */
char *_strncat(char *dest, const char *src, int n)
{
	size_t dest_length = strlen(dest);
	size_t src_length = strnlen(src, n);
	char *result = NULL;
	size_t i, j;

	result = realloc(dest, dest_length + src_length + 1);
	if (result == NULL)
		return NULL;

	for (i = 0; i < dest_length; i++)
		result[i] = dest[i];

	for (j = 0; j < src_length; j++)
		result[dest_length + j] = src[j];

	result[dest_length + src_length] = '\0';

	return (result);
}
