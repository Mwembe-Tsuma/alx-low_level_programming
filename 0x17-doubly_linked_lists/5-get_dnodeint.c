#include "lists.h"

/**
  *get_dnodeint_at_index- Func to return the nth node
  *@index: the index
  *@head: the head node
  *
  *Return: nth node or Null if does not exixt
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;

	while (curr != NULL && index > 0)
	{
		curr = curr->next;
		index--;
	}

	return (index > 0 ? NULL : curr);
}
