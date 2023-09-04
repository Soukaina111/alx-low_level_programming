#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string.
 *
 * @str: The string to be duplicated.
 *
 * Return: On success, a pointer to the duplicated string.
 *         On failure or if str is NULL, NULL.
 */
char *_strdup(char *str)
{
    if (str == NULL)
    {
        return (NULL);
    }

    size_t len = strlen(str) + 1;  /* +1 to include null terminator */

    char *dup_str = malloc(len * sizeof(char));

    if (dup_str == NULL)
    {
        return (NULL);
    }

    strcpy(dup_str, str);

    return (dup_str);
}
