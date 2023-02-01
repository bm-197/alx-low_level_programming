#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head pointer
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *preNode, *curNode, *nextNode;

	if (head == NULL || *head == NULL)
		return (NULL);

	preNode = NULL;
	curNode = *head;


	while (preNode != NULL)
	{
		nextNode = curNode->next;
		curNode->next = preNode;
		preNode = curNode;
		curNode = nextNode;
	}
	*head = preNode;
	return (*head);
}
