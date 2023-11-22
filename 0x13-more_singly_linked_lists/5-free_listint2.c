/* A program for file 5-free_listint2.c */

#include "lists.h"

/**
* free_listint2 - this will always free a singly linked list together.
* @head: this is a linked list to be printed.
*
* Return: This will Always return void only.
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp_node; /* This will only create a temporary node */

	if (head == NULL)
		return;

	while (*head)
	{
		tmp_node = (*head)->next;
		free(*head);
		(*head) = tmp_node;
	}
} /* This is the end of the program */
