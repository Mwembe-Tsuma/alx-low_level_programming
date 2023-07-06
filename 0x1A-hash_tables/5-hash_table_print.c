#include "hash_tables.h"

/**
  * hash_table_print- function that prints a hash table.
  * @ht: The hash table
  *
  */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *Head;
	unsigned long int idx;
	unsigned char flags = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			if (flags == 1)
				printf(", ");
			Head = ht->array[idx];
			while (Head != NULL)
			{
				printf("'%s': '%s'", Head->key, Head->value);
				Head = Head->next;

				if (Head != NULL)
					printf(", ");
			}
			flags = 1;
		}
	}
	printf("}\n");
}
