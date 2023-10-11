#include "search_algos.h"
#include <math.h>
#include <stdio.h>


/**
  *jump_list- Implementation of Jump search in a singly linked list
  *@list: Pointer to the singly linked list
  *@size: Number of nodes in the list
  *@value: The value to search
  *
  *Return: Value or -1 if value not present or array
  *is empty
  *
  */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, i;
	listint_t *current;

	if (list == NULL)
		return (NULL);

	jump = (size_t)sqrt(size);
	current = list, *prev = NULL;

	while (current && current->n < value)
	{
		prev = current;
		for (i = 0; i < jump && current->next; i++)
			current = current->next;
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
    }
	printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);

	while (prev && prev->n < value)
	{
		prev = prev->next;
	}

	if (prev && prev->n == value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		return (prev);
	}

	return (NULL);
}
