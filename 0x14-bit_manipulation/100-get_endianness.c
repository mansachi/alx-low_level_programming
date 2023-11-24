/* A program for file 100-get_endianness.c */

#include "main.h"

/**
 * get_endianness - this is to check the endianness.
 *
 * Return: This will Always return 0 if BIG endian,
 * Otherwise return 1 if LITTLE endian.
 *
 * Description: In BIG endian format the MOST significant byte,
 * is stored first, thus gets stored at the smallest address byte,
 * while in LITTLE endian format the LEAST significant byte is stored first.
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c); /* this ends the program */
}
