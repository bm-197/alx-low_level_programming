#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: a pointer to the header
 * @n: the new value
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	if (n)
	{
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		free(newNode);
		return (NULL);
	}
	return (*head);
}
