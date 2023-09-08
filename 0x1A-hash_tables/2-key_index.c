#include "hash_tables.h"

/**
 * key_index - Calculates the index at which a key should be stored
 * @key: The key (string) to calculate the index for
 * @size: The size of the array in the hash table
 * Return: The index at which the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/*Calculate the hash value using the hash_djb2 function */
	hash_value = hash_djb2(key);

	/* divide by the array size and get the reminder */
	return (hash_value % size);
}
