/* A program for file 103-find_loop.c */

#include "lists.h"

/**
 * find_listint_loop - this will always find the loop in a linked list.
 * @head: this is the linked list to be searched for.
 *
 * Return: This will Always return the address of the node where the loop starts,
 * Otherwise return NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL); /* This ends the program */
}
