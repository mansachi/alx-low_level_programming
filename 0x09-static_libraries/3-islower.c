/**
 * This is a program for the prototype int _islower(int c).
 */

#include "stdio.h"

/**
 * _islower - this always check the lowercase alphabets efficiently.
 * @c: this will always be the letter input by user only.
 * Return: This will Always be 1 if c is lowercase, Otherwise return 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
