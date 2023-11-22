/* This is a program for file 8-sum_listint.c */

#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* sum_listint - this will always find the the sum of all the data in a linked list.
* @head: this is a linked list to be printed.
*
* Return: This will Always return the nth node,
* Otherwise return NULL.
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
return (sum);
} /* This is the end of the program */
