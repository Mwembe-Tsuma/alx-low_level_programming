#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  *add_node - Adds a new node
  *@head: Pointer to first node
  *@str: The string
  *
  *Return: New element address or NULL otherwise
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int len = 0;

	newNode = malloc(sizeof(list_t));

	while (str[len])
		len++;
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = (*head);
	(*head) = newNode;

	return (*head);
}
