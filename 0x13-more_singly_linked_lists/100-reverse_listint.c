#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head pointer
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *preNode, *nextNode;

	if (head == NULL || *head == NULL)
		return (NULL);

	preNode = NULL;
	nextNode = *head;

	while (nextNode != NULL)
	{
		nextNode = nextNode->next;
		(*head)->next = preNode;
		preNode = *head;
		*head = nextNode;
	}
	*head = preNode;
	return (*head);
}
