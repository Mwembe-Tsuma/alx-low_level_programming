#include "lists.h"
#include <stdlib.h>

/**
  *list_len- Prints number of elements of a list
  *@h: The list pointer
  *
  *Return: Number of elements in a list
  */

size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}


