#include <stdlib.h>
#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: pointer to the structure
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	listint_t *newNode;

	size_t len = 0;

	if (h == NULL)
		return;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);

}
