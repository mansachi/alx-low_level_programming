#include "main.h"

/**
 * _pow_recursion - this will always compute the value of x raised to the power of y as it is efficiently.
 * @x: this is the base number only.
 * @y: this is the exponent number only.
 *
 * Return: This will Always return the value of x raised to the power of y only.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
