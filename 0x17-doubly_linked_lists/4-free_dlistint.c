#include "lists.h"
/** code for 4-free_dlistint.c **/

/**
 * free_dlistint - this frees a linked dlistint_t list.
 * @head: this is the head of the dlistint_t list.
 */

void free_dlistint(dlistint_t *head) /** prototype **/
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
/** end of code **/
