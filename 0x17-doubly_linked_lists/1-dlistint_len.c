#include "lists.h"
#include <stdio.h>

/**
  *dlistint_len- Prints number elements
  *@h: head
  *
  *Return: Number of elements
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		/*printf("%d\n", h->n);*/
		h = h->next;

		count++;
	}
	return (count);
}
