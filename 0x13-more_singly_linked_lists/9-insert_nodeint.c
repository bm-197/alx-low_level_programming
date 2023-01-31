#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head
 * @idx: position to be added
 * @n: the new value
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	unsigned int i = 1;

	newNode = (listint_t *)malloc(sizeof(listint_t));
	newNode->n = n;
	newNode->next = NULL;

	if (newNode == NULL)
		return (0);
	if (*head == NULL || (*head)->next == NULL)
		return (NULL);

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	while (i < idx)
	{
		i++;
		*head = (*head)->next;
	}
	newNode->next = (*head)->next;
	(*head)->next = newNode;

	return (newNode);
}
