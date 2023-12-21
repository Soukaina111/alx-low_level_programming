#include "hash_tables.h"
/**
 * hash_djb2 - takes a string and returnsan index number
 * @str: the string to be transformed to index
 *
 * Return: The index number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hashed;
	int a;

	hashed = 5381;
	while ((a = *str++))
	{
		hashed = ((hashed << 5) + hashed) + a; /* hash * 33 + c */
	}
	return (hash);
}
