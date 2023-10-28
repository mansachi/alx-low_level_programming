/**
 * This is a program for the prototype char *_strncpy(char *dest,
 * char *src, int n)
 */

#include "main.h"

/**
 * _strncpy - this will always concatenate two strings efficiently.
 * @dest: this is the destination of a string only.
 * @src: this is the source string only.
 * @n: this is the number of character to be concatenated only.
 *
 * Return: This will Always be a Concatenated String.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len;

	for (len = 0; len < n && *src != '\0'; ++len)
		*(dest + len) = *src++;

	for (; len < n; ++len)
		*(dest + len) = '\0';

	return (dest);
}
