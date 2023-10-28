/**
 * This is a program for the prototype void _puts(char *str).
 */

#include "main.h"

/**
 * _puts - this will always print a string, followed by a new line, to stdout efficiently.
 * @str: this will always be a string only.
 *
 * Return: This will ALways return Nothing.
 */

void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		++len;
	}
	_putchar('\n');
}
