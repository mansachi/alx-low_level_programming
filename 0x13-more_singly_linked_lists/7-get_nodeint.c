/* This is a program for file 7-get_nodeint.c */

#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* get_nodeint_at_index - This will Always find the nth node of a listint_t linked list.
* @head: this is a linked list to be printed.
* @index: this is the index of the node, starting at 0.
*
* Return: This will Always return the nth node,
* Otherwise return NULL.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
return (head);
} /* This is the end of the program */
