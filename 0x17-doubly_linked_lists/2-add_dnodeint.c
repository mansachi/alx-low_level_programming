#include "lists.h"
/** code for 2-add_dnodeint.c **/

/**
 * add_dnodeint - this adds a new node at the beginning of a dlistint_t list.
 * @head: this is a pointer to the head of the dlistint_t list.
 * @n: This is the integer for the new node to contain.
 *
 * Return: If the function fails, Return NULL,
 * Otherwise, return the address of the new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n) /** prototype **/
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
/** end of code **/
