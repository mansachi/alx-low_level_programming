#include "lists.h"
/** code for 1-dlistint_len.c **/

/**
 * dlistint_len - This counts the number of elements in a linked dlistint_t list.
 * @h: this is the head of the dlistint_t list.
 *
 * Return: Returns the number of elements in the dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h) /** prototype **/
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
/** end of code **/
