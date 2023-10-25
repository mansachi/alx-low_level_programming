#include "main.h"

/**
 * _memcpy - this fills the first n bytes of the memory area efficiently
 * pointed to by s with the constant byte b only.
 *
 * @dest: this is a pointer to the memory area to be copied only.
 * @src: this is a pointer to the memory area of which is to be copied only.
 * @n: this is a byte size only.
 *
 * Return: This is a pointer to the memory area only.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = dest;

	while (n--)
		*pdest++ = *src++;

	return (dest);
}
