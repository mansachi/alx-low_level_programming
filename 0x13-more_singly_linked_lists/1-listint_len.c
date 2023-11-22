/* A program for file 1-listint_len.c */

#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* listint_len - this will always print all the elements of a linked list.
* @h: this is a linked list to be printed
*
* Return: This will always return the number of nodes only.
*/

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		++counter;
		h = h->next;
	}

return (counter); /* This ends the program */
}
