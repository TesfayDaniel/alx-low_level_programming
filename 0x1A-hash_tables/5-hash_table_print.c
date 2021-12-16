#include "hash_tables.h"
#include <stdbool.h>

/**
* hash_table_print - prints a hash table
* @ht: the hash table
*
* Return: Always Void
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current = NULL;
	unsigned long int i;
	int top;

	top = 1;
	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			current = ht->array[i];
			while (current)
			{
				if (!top)
					printf(", ");
				printf("'%s': '%s'", current->key, current->value);
				top = 0;
				current = current->next;
			}
		}
	}
	printf("}\n");
}
