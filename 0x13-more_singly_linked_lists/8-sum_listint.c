#include "lists.h"

/**
*sum_listint - Return the sum of nth node in a list
*@head: Pointer to first node
*
*Return: sum or 0 if list is empty
*/

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (temp == NULL)
		return (0);
	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}

	return (sum);
}
