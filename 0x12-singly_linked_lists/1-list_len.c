/* A program for file 1-list_len.c */

#include "lists.h"

/**
* list_len - this will count the elements of a linked list.
* @h: this is a singly linked list
*
* Return: This will Always return the number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		++counter;
		h = h->next;
	}

return (counter);
}
