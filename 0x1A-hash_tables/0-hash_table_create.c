#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table.
 * @size: Size of the array
 * Return: A pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;

	new = malloc(sizeof(hash_table_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->size = size;
	new->array = calloc(new->size, sizeof(hash_table_t *));

	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
