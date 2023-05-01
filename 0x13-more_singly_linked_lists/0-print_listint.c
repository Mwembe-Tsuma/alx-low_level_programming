#include "lists.h"
#include <stdio.h>

/**
 *print_listint- Prints all the elements of a list
 *@h: The list pointer
 *
 *Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("[%d]\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}
