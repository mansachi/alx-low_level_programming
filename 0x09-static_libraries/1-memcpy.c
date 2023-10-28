/**
 * This is a program for the prototype char *_memcpy.....
 */

#include "main.h"

/**
 * _memcpy - this will always fill the first n bytes of the memory area efficiently,
 * printed to s with the constant byte b only.
 *
 * @dest: this is a pointer to the memory area to be copied only.
 * @src: this is a pointer to the memory area where to copy only.
 * @n: this is the byte size only.
 *
 * Return: This will Always be a Pointer to the memory area.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = dest;

	while(n--)
		*pdest++ = *src++;

	return (dest);
}
