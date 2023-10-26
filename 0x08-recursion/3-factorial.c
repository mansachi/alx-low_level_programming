#include "main.h"

/**
 * factorial - this will always compute a factorial efficiently.
 * @n: this is an integer number only.
 *
 * Return: This will Always be a factorial of a number only.
 */

int factorial(int n)
{
	int fact;

	if (n > 0)
	{
		fact = n * factorial(n - 1);
		return (fact);
	}

	else if (n == 0)
		return (1);

	else
		return (-1);
}
