/**
 * This is a program for the prototype- int _abs(int n) -
 */

#include "stdio.h"

/**
 * _abs - this will always compute the absolute value of an integer efficiently.
 * @n: this will always be an integer number only.
 * Return: This will ALways return Absolute Value.
 */

int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}
