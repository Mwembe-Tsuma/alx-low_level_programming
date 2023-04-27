#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  *add_node_end - Adds a new node at the end of a list
  *@head: Pointer to first node
  *@str: The string
  *
  *Return: New element address or NULL otherwise
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *temp = *head;
	unsigned int len = 0;

	newNode = malloc(sizeof(list_t));

	while (str[len])
		len++;
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = len;
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
