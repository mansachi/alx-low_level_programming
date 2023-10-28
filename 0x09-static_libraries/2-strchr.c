/**
 * This is a program for the prototype char *_strchr(char *s, char c).
 */

#include "main.h"
#include <stddef.h>

/**
 * _strchr - this will always locate a character in a string efficiently.
 *
 * @s: this is a pointer to a string only.
 * @c: this is a character that is to be located only.
 *
 * Return: This will Always be a Pointer to the Character.
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
