#inlcude "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head pointer
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t dnum = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n)
		h = h->next;
		dnum++;
	}
	return (dnum);
}
