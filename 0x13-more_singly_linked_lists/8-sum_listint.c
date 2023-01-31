#include "lists.h"

/**
 * sum_listint -  returns the sum of all the
 * 	data (n) of a listint_t linked list
 * @head: pointer to structure
 *
 * Return: returns the sum
 * 	if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		sum += head->n; 
		head = head->next;
	}
	return (sum);
}
