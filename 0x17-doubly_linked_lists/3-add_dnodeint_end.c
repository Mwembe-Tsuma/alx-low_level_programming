#include "lists.h"

/**
  **add_dnodeint_end- Adds a new node at the end
  *@head: The head node
  *@n: The node value
  *
  *Return: Address of new element
  *
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *curr;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (*head);
	}

	else
	{
		curr = *head;
		while (curr->next != NULL)
			curr = curr->next;
	}

	curr->next = newNode;
	newNode->prev = curr;

	return (newNode);
}
