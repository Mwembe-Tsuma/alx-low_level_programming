#include "lists.h"

/**
  *free_dlistint- Free a list
  *@head: The head node
  *
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	while (head)
	{
		curr = head;
		head = head->next;
		curr->next = NULL;
		curr->prev = NULL;

		free(curr);
	}
}
