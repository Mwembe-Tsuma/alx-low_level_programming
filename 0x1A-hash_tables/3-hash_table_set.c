#include "hash_tables.h"

/**
  * hash_table_set- Function that adds an element to the hash table.
  * @key: The key
  * @value: The value
  * @ht: Pointer to the hash table
  * Return: 1 if it succeeded, 0 otherwise
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_element;
	char *val_cpy;
	unsigned long int idx, j;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	val_cpy = strdup(value);
	if (val_cpy == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (j = idx; ht->array[j]; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = val_cpy;
			return (1);
		}
	}

	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
	{
		free(val_cpy);
		return (0);
	}

	new_element->key = strdup(key);
	if (new_element->key == NULL)
	{
		free(new_element);
		return (0);
	}

	new_element->next = ht->array[idx];
	ht->array[idx] = new_element;
	return (1);
}
