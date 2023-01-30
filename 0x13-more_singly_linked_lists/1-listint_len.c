#include "lists.h"

/**
 * listint_len -  returns the number of elements
 * in a linked listint_t list
 * @h - a pointer to the structure
 *
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		elements++;
	}

	return (elements);
}
