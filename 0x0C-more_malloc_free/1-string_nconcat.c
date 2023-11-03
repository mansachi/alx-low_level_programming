/**
 * This is a program for the prototype-
 * char *string_nconcat(char *s1, char *s2, unsigned int n);
 */

#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - this will always be a function that
 * concatenates the 1st n character of the 2nd string with
 * the 1st string efficiently.
 *
 * @s1: this will always be pointer to the 1st string only.
 * @s2: this will alwys be pointer to the 2nd string only.
 * @n: this is the number of character to be concatenated.
 *
 * Return: This will Always be a Pointer to the string,
 * Otherwise, return NULL if it fails.
 */

char *string_nconcat(char *s1, char *s2,unsigned int n)
{
	char *newstr, *temp;
	unsigned int size, size1 = 0, size2 = 0;

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

	if (n > size2)
		n = size2;

	if (size1 == 0)
		size1 = 1;

	size = size1 + n;
	newstr = malloc(size * sizeof(char));

	if (!newstr)
		return (NULL);

	temp = newstr;

	while (!s1)
		*temp++ = *s1++;

	while (size1++ < size)
		*temp++ = *s2++;
	*temp = '\0';

	return (newstr);
}
