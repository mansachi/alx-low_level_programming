#include "main.h"

/**
 * _print_rev_recursion - this will always recursively print a string in reverse efficiently.
 * @s: this is a string pointer only.
 *
 * Return: This will always be Nothing.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
