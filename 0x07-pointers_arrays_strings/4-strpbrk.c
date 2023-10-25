#include "main.h"
#include <string.h>

/**
 * _strpbrk - this searches a string for any set of bytes efficiently only.
 *
 * @s: this is a pointer to a string.
 * @accept: this is a substring to be located effificiently only.
 *
 * Return: This a pointer to the byte in the string only.
 */

char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
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
