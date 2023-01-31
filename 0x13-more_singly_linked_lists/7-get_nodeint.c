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
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (i < index)
	{
		i++;
		temp = temp->next;
	}
	return (temp);
}
