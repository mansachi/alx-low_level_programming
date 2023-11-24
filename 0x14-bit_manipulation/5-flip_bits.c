/* A program for 5-flip_bits.c */

#include "main.h"

/**
 * flip_bits - this is to find the number of bits you would need to flip,
 * to get the 2nd number from the first number to another.
 *
 * @n: this is the 1st number.
 * @m: this is the 2nd number (destiny).
 *
 * Return: Tis will Always return # of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int num_flips = 0;

	while (n)
	{
		if ((n & 1) != (m & 1)) /* this checks if corresponding bits are the same or not the same */
			num_flips++;
		n = n >> 1;
		m = m >> 1;
	}
return (num_flips); /* this ends the program */
}
