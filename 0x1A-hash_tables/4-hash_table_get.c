#include "hash_tables.h"

/**
  *hash_table_get- Function that retrieves a value associated with a key.
  *@ht: Pointer to hash table
  *@key: The key
  *
  *Return: value associated with the element,
  *		or NULL if key couldn’t be found
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *first_node;
	unsigned long int idx = 0;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	first_node = ht->array[idx];
	while (first_node != NULL)
	{
		if (strcmp(first_node->key, key) == 0)
			return (first_node->value);
		first_node = first_node->next;
	}

	return (NULL);
}
