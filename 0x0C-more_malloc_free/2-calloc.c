/**
 * This is a program for the prototype-
 * void *_calloc(unsigned int nmemb, unsigned int size);
 */

#include <stdlib.h>
#include "main.h"

/**
 * _memset - this will always set the memory efficiently.
 *
 * @str: this is a string only.
 * @ch: this is an input character only.
 * @n: this is the amount of bytes only.
 *
 * Return: This will Always return a String.
 */

char *_memset(char *str, char ch, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		str[i++] = ch;

	return (str);
}

/**
 * _calloc - this will always allocate memory for an
 * array using malloc efficiently.
 *
 * @nmemb: this is the n elements of an array only.
 * @size: this is the amount of bytes only.
 *
 * Return: This will Always be a Pointer to the 
 * allocate memory, Otherwise NULL if it fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (size <= 0 || nmemb == 0)
		return (0);

	ptr= malloc(nmemb * size);

	if (!ptr)
		return (0);

	return (_memset(ptr, 0, nmemb * size));
}
