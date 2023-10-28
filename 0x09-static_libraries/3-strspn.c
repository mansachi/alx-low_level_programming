/**
 * This is a program for the prototype unsigned int _strspn(char *s, char *accept).
 */

#include "main.h"
#include <string.h>

/**
 * _strspn - this will always get the length of a prefix substring everytime efficiently.
 *
 * @s: this is a pointer to a string only.
 * @accept: this is how and where the substring is to be located only.
 *
 * Return: This will Always be the number of bytes in the initial segment only.
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
