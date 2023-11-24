/* A program for file 3-set_bit.c */

#include "main.h"

/**
 * set_bit - this is to find the value of a bit at a given index.
 * @n: this is a decimal number.
 * @index: this is an index starting from 0 of the bit you want to get.
 *
 * Return: This will Always return the value of a bit.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32) /* the size of long int is 32 bits only */
		return (-1);

	 /*
	 * the first shift left 1 by index bits,
	 * then you OR/Add it to the given number.
	 */

	*n = *n | (1 << index);

return (1); /* this ends the program */
}
