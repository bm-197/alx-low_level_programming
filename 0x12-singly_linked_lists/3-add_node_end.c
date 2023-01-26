#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node 
 * at the end of a list_t list.
 * @head: a pointer to head
 * @str: new value
 *
 * Return: the address of the new element,
 * or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;
	char *dup;
	int len;

	newNode = (list_t *)malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	dup = strdup(str);
	for (len = 0; str[len];)
		len++;

	newNode->str = dup;
	newNode->len = len
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}
	return (*head);
}
