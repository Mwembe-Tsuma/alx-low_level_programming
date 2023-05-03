#include "lists.h"

/**
  *delete_nodeint_at_index- Delete a node at index
  *@head: Pointer to head head node
  *@index: Index of node to be deleted
  *
  *Return: 1 if success or -1 otherwise
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *node = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);

		return (1);
	}
	while (x < index - 1)
	{
		if (temp == NULL || (temp->next) == NULL)
			return (-1);
		temp = temp->next;
		x++;
	}
	node = temp->next;
	temp->next = node->next;
	free(node);

	return (1);
}
