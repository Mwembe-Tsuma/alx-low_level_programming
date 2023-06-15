#include "lists.h"

/**
*sum_dlistint- Func to add all data in a list
*@head: The head node
*
*Return: Sum
*/
int sum_dlistint(dlistint_t *head)
{
	int results = 0;

	while (head != NULL)
	{
		results += head->n;
		head = head->next;
	}

	return (results);
}
