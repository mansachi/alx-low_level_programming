/**
 * This is a program for the prototype int _isalpha(int c).
 */

#include "stdio.h"

/**
 * _isalpha - this will always check the alphabetic character efficiently.
 * @c: this will always be the character input by the user only.
 * Return: This will Always be 1 if c is alphabet, Otherwise return 0.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
