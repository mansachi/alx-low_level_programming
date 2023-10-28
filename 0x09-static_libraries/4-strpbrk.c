/**
 * This is a program for the prototype char *_strpbrk(char *s, char *accept).
 */

#include "main.h"
#include <string.h>

/**
 * _strpbrk - this will always search a string for a particular set of bytes efficiently.
 *
 * @s: this is a pointer to a string only.
 * @accept: this is a substring that is to be located only.
 *
 * Return: This will Always be a Pointer to the byte in String.
 */

char *_strpbrk(char *s, char *accept)
{
	if ((s ==NULL) || (accept == NULL))
		return (NULL);

	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}

	return (NULL);
}
