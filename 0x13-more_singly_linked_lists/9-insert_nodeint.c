#include "lists.h"

/**
  *insert_nodeint_at_index- Insert a new node
  *@head: Pointer to head head node
  *@idx: Index
  *@n: value
  *
  *Return: Address of new node or Null otherwise
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *newNode;
	unsigned int x;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL || head == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;

		return (newNode);
	}
	for (x = 0; temp && x < idx; x++)
	{
		if (x == idx - 1)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
