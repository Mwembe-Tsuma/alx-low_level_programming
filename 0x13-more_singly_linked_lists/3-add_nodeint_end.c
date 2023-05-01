#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
*add_nodeint_end - Adds a new node at the end of a list
*@head: Pointer to first node
*@n: New node value
*Return: New element address or NULL otherwise
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = newNode;
	return (newNode);
}

