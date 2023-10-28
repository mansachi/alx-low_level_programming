/**
 * This is a program prototype for int _isdigit(int c).
 */

#include "main.h"

/**
 * _isdigit - this will always check the digit from 0 - 9 efficiently.
 * @c: this will always be the character only.
 * Return: This will Always be 1 if c is digit, Otherwise return 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
