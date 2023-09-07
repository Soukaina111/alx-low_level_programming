#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptrA;
	char *ptrB;
	unsigned int i;

	if (sizeA == sizeB)
		return (ptr);

	if (sizeA == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(sizeA));

	ptrA = malloc(sizeA);
	if (!ptrA)
		return (NULL);

	ptrB = ptr;

	if (sizeA < sizeB)
	{
		for (i = 0; i < sizeA; i++)
			ptrA[i] = ptrB[i];
	}

	if (sizeA > sizeB)
	{
		for (i = 0; i < sizeB; i++)
			ptrA[i] = ptrB[i];
	}

	free(ptr);
	return (ptrA);
}
