#include "hash_tables.h"

/**
* hash_table_get - returns a value associated with a key
* @ht: the hash table
* @key: the key
*
* Return: the value associated with the element
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current = NULL;
	unsigned long int i;

	if (!ht || !key || !*key)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	current = ht->array[i];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
