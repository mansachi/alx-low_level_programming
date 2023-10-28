/**
 * This is a program for the prototype int _strcmp(char *s1, char *s2)
 */

#include "main.h"

/**
 * _strcmp - this will always compare two different strings efficiently.
 * @s1: this will always be the first string only.
 * @s2: this will always be the second string only.
 *
 * Return: This will Always return String Pointer.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
