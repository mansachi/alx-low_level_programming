#include "lists.h"
/** code for 0-print_dlistint.c **/

/**
 * print_dlistint - this prints all the elements of a dlistint_t list.
 * @h: Head of the dlistint_t list.
 *
 * Return: Returns the number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h) /** prototype **/
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
/** end of code **/
