#include "main.h"
#include <string.h>

/**
 * _strspn - this efficiently gets the length of a prefix substring only.
 *
 * @s: this is a pointer to a string.
 * @accept: this is a substring to be located efficiently only.
 *
 * Return: This is a number of byte in the initial segment only.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if ((s == NULL) || (accept == NULL))
		return (len);

	while (*s && strchr(accept, *s++))
	{
		len++;
	}

	return (len);
}
