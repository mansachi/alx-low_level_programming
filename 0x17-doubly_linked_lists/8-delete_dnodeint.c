#include "lists.h"
/** code for 8-delete_dnodeint.c **/

/**
 * delete_dnodeint_at_index - this will delete a node,
 * from a dlistint_t at a given index.
 * @head: this is a pointer to the head of the dlistint_t.
 * @index: this is the index of the node to delete.
 *
 * Return: Upon success Return 1,
 * Otherwise, Return -1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}

	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}

	free(tmp);
	return (1);
}
/** end of code **/
