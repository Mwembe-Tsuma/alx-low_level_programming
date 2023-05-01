#include "lists.h"

/**
 *add_nodeint - Adds a new node at the beginning
 *@head: Pointer to first node
 *
 *Return: New element address or NULL otherwise
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = (*head);
	(*head) = newNode;
	return (*head);
}
