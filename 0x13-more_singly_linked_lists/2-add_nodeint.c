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
	listint_t *newNode, *temp;

	newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL || n == NULL)
		return (NULL);
	else
	{
		temp = *head;
		newNode->n = n;
		newNode->next = temp;
		temp = newNode;
	}
	return (*head);
}
