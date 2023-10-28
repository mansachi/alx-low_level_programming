/**
 * This is a program for the prototype char *_memset
 * (char *s, char b, unsigned int n)
 */

#include "main.h"

/**
 * _memset - this will always fill the first n bytes of,
 * the memory area efficiently, pointed to by the s with the constant byte b.
 *
 * @s: this is the pointer to the memory area only.
 * @b: this is the constant byte only.
 * @n: this is the byte size only.
 *
 * Return: This will Always return a Pointer to memory area only.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}

	return (s);
}
