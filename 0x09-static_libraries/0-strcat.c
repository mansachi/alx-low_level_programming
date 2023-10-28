/**
 * This is a program for the prototype,
 * char *_strcat(char *dest, char *src).
 */

#include "main.h"

/**
 * _strcat - this will always concatenate two strings efficiently only.
 * @dest: this is the destination string only.
 * @src: this is the source string only.
 *
 * Return: This will Always return a Concatenated String only.
 */

char *_strcat(char *dest, char *src)
{
	int len1 = 0, len2;

	while (*(dest + len1) != '\0')
		len1++;

	for (len2 = 0; src[len2] != '\0'; ++len2)
		dest[len1 + len2] = src[len2];

	dest[len1 + len2] = '\0';

	return (dest);
}
