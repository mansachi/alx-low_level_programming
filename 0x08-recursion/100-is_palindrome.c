#include "main.h"

/**
 * _strlen_recursion - this will always be the size only.
 * @s: this is the pointer to the string parameters only.
 * Return: This will Always be the recursion only.
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * p1 - this is the palindrome only.
 * @s: this is the pointer to the string only.
 * @1: this is the is position only.
 * Return: This will Always be a boolena only.
 */

int p1(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + l))
	{
		return (p1(s + 1, l - 2));
	}
	return (0);
}

/**
 * is_palindrome - this will always be the palindrome only.
 * @s: this is the pointer to the string only.
 * Return: This will Always be recursion only.
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p1(s, len - 1));
}
