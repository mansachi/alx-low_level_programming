/* A program for file 4-free_list.c */

#include <string.h>
#include "lists.h"

/**
* free_list - this will always free a singly linked list.
* @head: this is a linked list to print
*
* Return: This will Always return void.
*/

void free_list(list_t *head)
{
	list_t *tmp_node; /* this will create a temporary node */

	while (head)
	{
		tmp_node = head;
		head = head->next;
		free(tmp_node->str);
		free(tmp_node);
	}
}
