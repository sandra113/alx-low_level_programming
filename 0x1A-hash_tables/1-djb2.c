#include "hash_tables.h"

/**
 * hash_djb2 - implements the djb2 algorithm
 * @str: a pointer to the beginning of a string
 * Return: the final hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
