/* A program for file 2-add_nodeint.c */

#include <string.h>
#include "lists.h"

/**
* add_nodeint - this will always addsa new node at the beginning of a singly linked list.
* @head: this is a linked list to be printed.
* @n: this is a value to be added to the node only.
*
* Return: This will always return the address of the new element,
* Otherwise, return NULL if it fails.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node; /* This will create a new node */

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = (*head); /* This will point it to the old head */
	(*head) = new_node;	/* This will point head to the new node */

	return (*head); /* This ends the program */
}
