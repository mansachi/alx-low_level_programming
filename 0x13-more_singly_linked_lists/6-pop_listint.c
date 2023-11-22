/* This is a program for file 6-pop_listint.c */

#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - this will always add a new node at the beginning of a singly linked list.
* @head: this is a linked list to be printed.
*
* Return: This will Always return the address of the new element,
* Otherwise return NULL if it fails.
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp_node; /* This will only create a new node */
	int value = 0;

	if (*head == NULL)
		return (0);

	tmp_node = *head;
	*head = tmp_node->next;
	value = tmp_node->n;
	free(tmp_node);

	return (value);
} /* This is the end of the program */
