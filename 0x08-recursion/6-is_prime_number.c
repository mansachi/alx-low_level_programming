#include "main.h"

/**
 * is_prime - tis will always check if the number is prime or not.
 *
 * @n: this is the integer number only.
 * @i: this is the integer and it will always iterate until it is <n/2 only.
 *
 * Return: This will Always be 1 if the number is prime, Otherwise return 0 only.
 */

int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (i <= n / 2)
	{
		if (n % i == 0)
			return (0);

		return (is_prime(n, ++i));
	}

	return (1);
}


/**
 * is_prime_number - this will always check if the number is prime or not efficiently.
 *
 * @n: this is an integer number only.
 *
 * Return: This will Always be 1 if the number is prime, Otherwise 0 only.
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
