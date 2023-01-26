#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a pointer to the structure that points to the new list
 * @str: the new value
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int len;
	char *dup;

	newnode = (list_t *)malloc(sizeof (list_t));
	if (newnode == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(newnode);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	newnode->str = dup;
	newnode->len = len;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
