#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list
 * @head: pointer to head
 * @index: position to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (indext = 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return(1);
	}
	while (i < index)
	{
		i++;
		if ((*head)->next == NULL)
			return (-1);

		*head = (*head)->next;
	}
	temp = (*head)->next;
	(*head)->next = temp->next;
	free(temp);

	return (1);
}
