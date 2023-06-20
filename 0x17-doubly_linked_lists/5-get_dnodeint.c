#include "lists.h"

/**
 * get_dnodeint_at_index - the nth node of a dlistint_t linked list.
 * @head: head of list
 * @index: index of the node, starting from 0
 *
 * Retrun: nth node, if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int ind = 0;
	while (head)
	{
		head = head->next;
		ind++;
	}
	
	if (index > ind)
		return (NULL);
	ind = 0;
	while (ind <= index)
	{
		head = head->next;
		ind++;
	}
	return (head)
}

