/**
 * This is a program for prototype int _isupper.
 */

#include "main.h"

/**
 * _isupper - this will always check the uppercase alphabets efficiently.
 * @c: this is tghe character only.
 * Return: This will Always be 1 if c is uppercase, Otherwise return 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
