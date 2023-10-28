/**
 * This is a program for the prototype char *_strstr(char *haystack, char *needle).
 */

#include "main.h"
#include <string.h>

/**
 * _strstr - this will always search for a string for a particular set of bytes efficiently.
 *
 * @haystack: this will always be a pointer to a string.
 * @needle: this will always be a substring that is to be located only.
 *
 * Return: This will Always be a Pointer to the byte in a String.
 */

char *_strstr(char *haystack, char *needle)
{
	char *or_haystack = haystack, *or_needle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (or_haystack);
		}

		needle = or_needle;
		or_haystack++;
		haystack = or_haystack;
	}
	return (0);
}
