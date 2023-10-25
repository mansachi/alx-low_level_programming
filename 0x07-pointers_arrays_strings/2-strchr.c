#include "main.h"

/**
 * _strchr - this locates a character in a string efficiently.
 *
 * @s: this is a pointer to a string only.
 * @c: this is a character to be located efficiently only.
 *
 * Return: This is a pointer to the character only.
 */

char *_strchr(char *s, char c)
{
	char *isFound = NULL;

	while (*s != '\0')
	{
		if (*s == c)
		{
			isFound = s;
			break;
		}
		++s;
	}
	if (*s == c)
		isFound = s;

	return (isFound);
}
