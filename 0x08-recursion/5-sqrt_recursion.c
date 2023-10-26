#include "main.h"

/**
 * _sqrt_recursion - this is the square root finder only.
 *
 * @n: this is an integer number only.
 *
 * Return: This is the sqrt root only.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - this is the natural square finder only.
 *
 * @n: this is the integer number only.
 * @i: this is the integer and it will iterate until it becomes <n.
 *
 * Return: This will Always be the sqrt root only.
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);

	if ((i * i) > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (_sqrt(n, ++i));
}
