#include "main.h"
#include <string.h>

/**
 * _strstr - this searches a string for any set of bytes efficiently only.
 *
 * @haystack: this is a pointer to a string only.
 * @needle: this is a substring to be located only.
 *
 * Return: this is a pointer to the byte in the string only.
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
