#include "main.h"

/**
 * _memset - this fills the first n bytes of the memory area efficiently
 * pointed to by s with the constant byte b only.
 *
 * @s: this is a pointer to the memory area.
 * @b: this is a constant byte only.
 * @n: this is a byte size only.
 *
 * Return: This is a pointer to the memory area efificiently only.
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
