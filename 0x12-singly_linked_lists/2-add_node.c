/* A program for file 2-add_node.c */

#include <string.h>
#include "lists.h"

/**
* add_node - this will add a new node at the beginning of a singly linked list.
* @head: this is the linked list to print
* @str: this will duplicated.
*
* Return: This will Always return the address of the new element,
* Otherwise, return  NULL if it failed.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node; /* This will create a new node */
	unsigned int c = 0;

	while (str[c++])
		;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = --c;
	new_node->next = (*head); /* This will point it to old head */
	(*head) = new_node;	/* This will point head to new node */

	return (*head);
}
