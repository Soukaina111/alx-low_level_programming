/**
 * hash_djb2 - takes a string and turns ito an index
 * @str: the string to be hashed
 *
 * Return: The hashindex
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
