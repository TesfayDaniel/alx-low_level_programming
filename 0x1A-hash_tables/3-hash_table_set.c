#include "hash_tables.h"

/**
* hash_table_set - adds an element to the hash table
* @ht: hash table you want to add or update the key/value to
* @key: the key
* @value: value associated with the key
*
* Return: 1 on success, otherwise 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current, *new;
	unsigned long int i;

	if (!ht || !key || !value)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	current = ht->array[i];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	if (!new->key)
		return (0);
	new->value = strdup(value);
	if (!new->value)
		return (0);
	new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}
