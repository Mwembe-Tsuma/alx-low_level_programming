#include "search_algos.h"
#include <stdio.h>


/**
  *linear_skip- Implementation of Linear search in a skip list
  *@list: Pointer to the singly linked list
  *@value: The value to search
  *
  *Return: Value or -1 if value not present or array
  *is empty
  *
  */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *last;

	if (list == NULL)
		return (NULL);

	last = list;

	do {
		list = last;
		last = last->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)last->index, last->n);
	} while (last->express && last->n < value);

	if (last->express == NULL)
	{
		list = last;
		while (last->next)
			last = last->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)last->index);

	while (list != last->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
