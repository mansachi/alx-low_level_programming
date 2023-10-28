/**
 * This is a program for the prototype int _strlen(char *s).
 */

#include "main.h"

/**
 * _strlen - this will always return the length of a string efficiently.
 * @s: this will always be a string only.
 *
 * Return: This will Always be a String Len.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		++len;

	return (len);
}
