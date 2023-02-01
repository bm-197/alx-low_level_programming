#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to structure
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	long int diff;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		diff = head - head->next;

		printf("[%p] %d\n",(void *)head, head->n);
		if (diff > 0)
		{
			head = head->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
		len++;
	}
	return (len);
}
