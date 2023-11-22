/* A program for file 0-print_listint.c */

#include <stdio.h>
#include "lists.h"

/**
* print_listint - this will always print all the elements of a linked list.
* @h: this is a linked list to print
*
* Return: This will Always return the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		++counter;
		h = h->next;
	}

return (counter); /* This ends the program */
}
