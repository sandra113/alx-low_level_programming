#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: The size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
