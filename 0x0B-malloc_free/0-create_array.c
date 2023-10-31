/**
 * This is a program for the prototype- char *create_array
 * (unsigned int size, char c) -
 */

#include <stdlib.h>
#include "main.h"

/**
 * create_array - this will always create an array of chars,
 * while initializing it with a specific char efficiently.
 *
 * @size: this will always be the  size of the array string,
 * to be created only.
 * @C: this will always be the character to initialize the string only.
 * Return: This will Always be a Pointer to the Array, Otherwise NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		str = malloc(size * sizeof(char));
		if (str == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; ++i)
				str[i] = c;
		}
	}

	return (str);
}
