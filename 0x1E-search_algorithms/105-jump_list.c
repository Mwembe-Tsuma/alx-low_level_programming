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
	size_t idx = 0;
	size_t jump = sqrt(size);
	size_t k = 0;
	size_t last_j = 0;
	listint_t *last = list;

	if (!list)
		return (NULL);

	while (list->n < value)
	{
		for (last_j = idx, last = list, k = 0; list->next && k < jump; k++)
		{
			list = list->next;
			idx++;
		}
		printf("Value checked at index [%lu] = [%d]\n", idx, list->n);
		if (!list->next)
			break;
	}

	if (!list->next)
		jump = last_j;
	else
		jump = idx >= jump ? idx - jump : 0;
	printf("Value found between indexes [%lu] and [%lu]\n", jump, idx);
	idx = idx >= size ? size - 1 : idx;
	list = last;
	while (list)
	{
		printf("Value checked at index [%lu] = [%d]\n", jump, list->n);
		if (list->n == value)
			return (list);
		jump++;
		list = list->next;
	}
	return (NULL);
}
