#include "lists.h"
/** code for 3-add_dnodeint_end.c **/

/**
 * add_dnodeint_end - this adds a new node at the end of a dlistint_t list.
 * @head: this is a pointer to the head of the dlistint_t list.
 * @n: this is the integer for the new node to contain.
 *
 * Return: If the function fails, Return NULL.
 * Otherwise, return the address of the new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n) /** prototype **/
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;

	return (new);
}
/** end of code **/
