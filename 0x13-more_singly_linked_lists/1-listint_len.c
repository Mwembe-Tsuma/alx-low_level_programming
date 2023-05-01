#include "lists.h"
#include <stdio.h>

/**
 *listint_len- Number of elements of a list
 *@h: The list pointer
 *
 *Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
