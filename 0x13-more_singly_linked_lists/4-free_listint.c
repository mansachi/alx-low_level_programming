/* A program for file 4-free_listint.c */

#include <string.h>
#include "lists.h"

/**
* free_listint - this will always free a singly linked list.
* @head: this is a linked list to be printed.
*
* Return: This will Always return void.
*/

void free_listint(listint_t *head)
{
	listint_t *tmp_node; /* This will create a temporary node */

	while (head)
	{
		tmp_node = head;
		head = head->next;
		free(tmp_node);
	}
} /* This is the end of the program */
