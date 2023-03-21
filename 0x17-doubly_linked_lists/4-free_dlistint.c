#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: a head pointer
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
