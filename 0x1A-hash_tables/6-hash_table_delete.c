#include "hash_tables.h"

/**
* hash_table_delete - deletes a hash table
* @ht: the hash table
*
* Return: Always Void
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *tmp;
	unsigned int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			current = ht->array[i];
			while (current)
			{
				tmp = current;
				free(current->key);
				if (current->value)
					free(current->value);
				current = current->next;
				free(tmp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
