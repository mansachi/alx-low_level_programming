#include "lists.h"
/** code for 6-sum_dlistint.c **/

/**
 * sum_dlistint - this will sum all the data of a dlistint_t list.
 * @head: this is the head of the dlistint_t list.
 *
 * Return: Returns the sum of all the data.
 */

int sum_dlistint(dlistint_t *head) /** prototype **/
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
/** end of code **/
