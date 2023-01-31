#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: pointer to structure
 *
 * Return: returns the nth node
 * 	if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	int i = 1;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp->n);
}
