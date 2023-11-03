/**
 * This is a program for the prototype-
 * void *malloc_checked(unsigned int b);
 */

#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - this will always allocate memory,
 * whilst making use of alloc only.
 *
 * @b: this will always be the size of the pointer
 * to be created.
 *
 * Return: This will Always return Pointer to the,
 * allocated memory, Otherwise return 98 if it fails.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
