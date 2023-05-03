#include "lists.h"

/**
*pop_listint - Pop out the head node for me
*@head: Pointer to first node
*
*Return: 0 success
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (head == NULL || *head == NULL)
		return (0);

	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (i);
}
