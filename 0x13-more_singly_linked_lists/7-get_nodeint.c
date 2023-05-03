#include "lists.h"

/**
*get_nodeint_at_index - Return the nth node in a list
*@head: Pointer to first node
*@index: Index of node
*
*Return: 0 success or NULL otherwise
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	if (temp == NULL)
		return (NULL);

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp);
}
