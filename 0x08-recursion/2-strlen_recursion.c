#include "main.h"

/**
 * _strlen_recursion - this will always compute a string length efficiently.
 * @s: this is a string pointer only.
 *
 * Return: This will always be lenght os string only.
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len = _strlen_recursion(s + 1);
		++len;
	}
	return (len);
}
