#include "hash_tables.h"

/**
  * hash_table_delete- function that deletes a hash table.
  * @ht: The hash table
  *
  */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *curr_node, *temp;
	unsigned long int idx;

	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			curr_node = ht->array[idx];
			while (curr_node != NULL)
			{
				temp = curr_node->next;
				free(curr_node->key);
				free(curr_node->value);
				free(curr_node);
				curr_node = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
