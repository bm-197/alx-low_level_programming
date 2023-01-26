#include <stdio.h>
#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h: a pointer to the structure
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t size;
	list_t temp;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		temp = h;
		else
		{
			prinf("[%d] %s", temp->len, temp->str);
		}
		temp = temp->next;
		size++;
	}
	return (size);
}
