#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: pointer to the head of the linked list.
 * @idx: the index at which the node is going to be added.
 * @n: teh value of teh inserted node.
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_int *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	while (idx != 0)
		{
			if (*h == NULL)
				return (NULL);
			*h = (*h)->next;
		}
	new->next = (*h)->next;
	((*h)->next)->prev = new;
	(*h)->next = new;
	new->prev = *h;
	return (new);
}
