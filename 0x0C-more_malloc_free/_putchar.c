/**
 * This is a program for _putchar.c
 */

#include <unistd.h>

/**
 * _putchar - This will always write the character
 * c, to stdout efficiently.
 * @c: this is the character for print only.
 *
 * Return: This will Always return Success.
 * Otherwise return -1, and error is set efficiently.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
