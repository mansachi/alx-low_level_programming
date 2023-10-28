/**
 * This is a program for the prototype- char *_strcpy(char *dest, char *src) -
 */

#include "main.h"

/**
 * _strcpy - this will always copies the string efficiently.
 * @src: this is the place the string will be copied.
 * @dest: this is the string to e copied only.
 *
 * Return: This will Always copy the String.
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		++len;
	}

	*(dest + len) = '\0';

	return (src);
}
