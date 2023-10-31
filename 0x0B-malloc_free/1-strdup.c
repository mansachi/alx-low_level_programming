/**
 * This is a program for the prototype-
 * char *_strdup(char *str).
 */

#include <stdlib.h>
#include "main.h"

/**
 * _strdup - this will always create a pointer to,
 * a new string which is a duplictae of the string str efficiently.
 * Using Malloc, memory for the new string is obtained with malloc only.
 *
 * @str: this is a pointer to a string only.
 *
 * Return: This will Always be a Pointer to the array, Otherwise NULL if it fails.
 */

char *_strdup(char *str)
{
	char *newstr;
	unsigned int i, size = 0;

	if (!str)
	{
		return (NULL);
	}

	while (*(str + size++))
		;

	newstr = malloc(size * sizeof(char));

	if (newstr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; ++i)
			newstr[i] = str[i];
	}

	return (newstr);
}
