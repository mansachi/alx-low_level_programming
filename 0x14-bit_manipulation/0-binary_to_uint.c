/* A program for file 0-binary_to_uint.c */

#include "main.h"

/**
* binary_to_uint - this is to convert a binary number to unsigned int.
*
* @b: this is a string containing the binary number.
*
* Return: This will Always return the decimal number.
*/

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; ++i)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		decimal = 2 * decimal + (b[i] - '0');
	}

	return (decimal); /* this ends the program */
}
