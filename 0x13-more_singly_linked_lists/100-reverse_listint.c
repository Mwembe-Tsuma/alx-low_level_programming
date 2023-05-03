#include "lists.h"

/**
  *reverse_listint- Reverse a linked list
  *@head: Pointer
  *
  *Return: Pointer to first node
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL;
	listint_t *nextNode = NULL;

	while (*head)
	{
		nextNode = (*head)->next;
		(*head)->next = node;
		node = *head;
		*head = nextNode;
	}

	*head = node;
	return (*head);
}
