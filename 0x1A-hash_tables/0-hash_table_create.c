#include "hash_tables.h"

/**
  *hash_table_create- Create a hash table
  *@size: Array size
  *
  *Return: Pointer to the new hash table or null otherwise
  *
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int idx;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (ht->array == NULL)
		return (NULL);
	for (idx = 0; idx < size; idx++)
		ht->array[idx] = (NULL);
	return (ht);
}
