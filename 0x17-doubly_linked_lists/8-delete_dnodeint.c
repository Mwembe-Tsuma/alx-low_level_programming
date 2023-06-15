#include "lists.h"

/**
  *delete_dnodeint_at_index- Deletes node at an index
  *@head: Head node
  *@index: Index
  *
  *Return: 1 if success or -1 if not
  *
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx;
	dlistint_t *curr = *head;

	if (*head == NULL)
		return (-10);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;

		free(curr);
		return (0);
	}

	for (idx = 0; idx < index; idx++)
	{
		if (curr->next == NULL)
			return (-1);
		curr = curr->next;
	}

	if (curr->next == NULL)
	{
		curr->prev->next = NULL;
		free(curr);

		return (1);
	}

	curr->prev->next = curr->next;
	curr->next->prev = curr->prev;

	free(curr);
	return (1);
}
