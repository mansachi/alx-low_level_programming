/* A program for file 0-print_list.c */

#include <stdio.h>
#include "lists.h"

/**
* print_list - this will print all the elements of a linked list.
* @h: this is a linked list to print
*
* Return: This will Always return the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		++counter;
		h = h->next;
	}

return (counter);
}
