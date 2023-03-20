#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the head pointer
 * @n: data of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return NULL;
	while (*head)
	{
		*head = (*head)->next;
	}
	new->n = n;
	(*head)->next = new;
	new->prev = *head;
	new->next = NULL;
	return (new);
}

