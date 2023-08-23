#include <stdlib.h>
#include <string.h>

/**
 * _strncpy - Copies a string, up to n bytes, from src to dest.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to copy from src.
 *
 * Return: Pointer to the resulting string (dest).
 */
char *_strncpy(char *dest, const char *src, int n)
{
	size_t src_length = strnlen(src, n);
	char *result = NULL;
	size_t i;

	result = realloc(dest, src_length + 1);
	if (result == NULL)
		return NULL;

	for (i = 0; i < src_length; i++)
		result[i] = src[i];

	result[src_length] = '\0';

	return (result);
}
