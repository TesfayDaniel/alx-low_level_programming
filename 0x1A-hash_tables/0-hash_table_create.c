#include "hash_tables.h"

/**
* hash_table_create - creates a hash table
* @size: the size of the array
*
* Return: pointer to hash_table_t struct
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;

	if (size == 0)
		return (NULL);
	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);
	hash_t->size = size;
	hash_t->array = malloc(size * sizeof(hash_node_t **));
	if (hash_t->array == NULL)
	{
		free(hash_t);
		return (NULL);
	}
	return (hash_t);
}
