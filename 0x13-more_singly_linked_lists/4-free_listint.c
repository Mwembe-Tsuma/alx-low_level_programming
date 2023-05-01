#include "lists.h"

/**
*free_listint - Frees a list
*@head: Pointer to first node
*
*Return: Nothing
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
