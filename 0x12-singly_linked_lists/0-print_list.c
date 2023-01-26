#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: a pointer to the structure
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t size = 0;
	list_t *temp;
	temp = h;
	while (h)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			prinf("[%d] %s", temp->len, temp->str);
		}
		temp = temp->next;
		size++;
	}
	return (size);
}
