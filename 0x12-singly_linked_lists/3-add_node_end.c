/* A program for file 3-add_node_end.c */

#include <string.h>
#include "lists.h"

/**
* add_node_end - this will always add a new node at the end of a singly linked list.
* @head: this is a linked list to print
* @str: this will duplicated.
*
* Return: This will Always return the address of the new element,
* Otherwise, return NULL if it failed.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp_node; /* This will create a new node */
	unsigned int c = 0;

	if (str == NULL)
		return (NULL);

	while (str[c++])
		;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = --c;
	new_node->next = NULL; /* This will always point it to null */

	/* When head is NULL, it will be an empty list */
	if (*head == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}

	tmp_node = *head;
	while (tmp_node->next)
		tmp_node = tmp_node->next;

	tmp_node->next = new_node;	/* This will always point head to new node */

	return (new_node);
}
