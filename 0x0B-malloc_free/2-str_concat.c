/**
 * This is a program for the prototype- 
 * char *str_concat(char *s1, char *s2).
 */

#include <stdlib.h>
#include "main.h"

/**
 * str_concat - this will always be a function that concatenates,
 * two strings using dynamic memory allocation (malloc) efficiently.
 *
 * @s1: this is a pointer to the 1st string only.
 * @s2: this is a pointer to the 2nd string only.
 *
 * Return: This will Always be a Pointer to the string, Otherwise NULL if it fails.
 */

char *str_concat(char *s1, char *s2)
{
	char *newstr, *temp;
	unsigned int size, size1 = 0, size2 = 0, i = 0;

	if (!s1)
		s1 = "";
	else
		while (*(s1 + size1++))
			;

	if (!s2)
		s2 = "";
	else
		while (*(s2 + size2++))
			;

	size = size1 + size2 - 1;
	newstr = malloc(size * sizeof(char));

	if (!newstr)
		return (NULL);

	temp = newstr;

	while (*s1)
		*temp++ = *s1++;

	while (*s2)
		*temp++ = *s2++;

	return (newstr);
}
