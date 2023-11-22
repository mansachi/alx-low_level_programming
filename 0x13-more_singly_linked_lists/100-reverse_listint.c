/* A program for file 100-reverse_listint.c */

#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - this will always reverse a linked list.
 * @head: this is a pointer to the first node in the linked list.
 *
 * Return: This will Always return pointer to the 1st node in the new list,
 * Otherwise return fail.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr_list_head = NULL;
	listint_t *rev_list_head = NULL;

	while (*head)
	{
		curr_list_head = (*head)->next;
		(*head)->next = rev_list_head;
		rev_list_head = *head;
		*head = curr_list_head;
	}

	*head = rev_list_head;

	return (*head); /* This ends the program */
}
