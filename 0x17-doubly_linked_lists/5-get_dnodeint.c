#include "lists.h"
/** code for 5-get_dnodeint.c **/

/**
 * get_dnodeint_at_index - this will locate a node in a dlistint_t list.
 * @head: this is the head of the dlistint_t list.
 * @index: this is the node to locate.
 *
 * Return: If the node does not exist, Return NULL.
 * Otherwise, Return the address of the located node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index) /** prototype **/
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
/** end of code **/
