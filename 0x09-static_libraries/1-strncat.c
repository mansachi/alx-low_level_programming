/**
 * This is aprogram for the prototype char *_strncat(char *dest, char *src, int n).
 */

#include "main.h"

/**
 * _strncat - this will always concatenate two different strings efficiently.
 * @dest: this will always be the destination string only.
 * @src: this will always be the source string only.
 * @n: this is the number of character to be concatenated only.
 *
 * Return: This will Always be the Concatenated string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0, len2;

	while (*(dest + len1) != '\0')
		len1++;

	for (len2 = 0 ; len2 < n && src[len2] != '\0' ; len2++)
		dest[len1 + len2] = src[len2];

	dest[len1 + len2] = '\0';

	return (dest);
}
