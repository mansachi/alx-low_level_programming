#include "main.h"

/**
 * _puts_recursion - this will always recursively print a string, followed by a new line efficiently.
 * @s: this is a string pointer only.
 *
 * Return: This will always return Nothing.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}
