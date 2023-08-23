#include <stdlib.h>
#include <string.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the resulting string (dest).
 */
char *_strcat(char *dest, char *src)
{
	size_t dest_length = strlen(dest);
	size_t src_length = strlen(src);
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
