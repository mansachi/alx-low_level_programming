/* A program for file 3-add_nodeint_end.c */

#include <string.h>
#include "lists.h"

/**
* add_nodeint_end - this will always add a new node at the end of a singly linked list.
* @head: this is a linked list to be printed.
* @n: this is a value to be added.
*
* Return: This will Always return the address of the new element,
* Otherwise return NULL if it fails.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp_node; /* This will create a new node */

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL; /* This will point it to null */

	/* when the head is NULL, it will be an empty list */
	if (*head == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}

	tmp_node = *head;
	while (tmp_node->next)
		tmp_node = tmp_node->next;

	tmp_node->next = new_node;	/* This will point the head to the new node */

	return (new_node); /* This ends the program */
}
