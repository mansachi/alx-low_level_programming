/**
 * This is a program for the prototype-
 * void *_realloc void *ptr, unsigned int old_size, unsigned int new_size
 */

#include <stdlib.h>
#include "main.h"

/**
 * _realloc - this will always reallocate a memory block
 * using malloc and free efficiently.
 *
 * @ptr: this is a pointer to the memory previously allocated.
 * @old_size: this is the size of the allocated space for ptr in bytes only
 * @new_size: this is the new size of the new memory block in bytes.
 *
 * Return: This will Always be a Pointer to he newly created array,
 * Otherwise return NULL if it fails.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *reallocPtr, *clonePtr;
	unsigned int i = 0;

	if (ptr == NULL)
		return (malloc(new_size));

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	reallocPtr = malloc(new_size);

	if (reallocPtr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	clonePtr = ptr;

	if (old_size > new_size)
		old_size = new_size;

	while (i < old_size)
	{
		reallocPtr[i] = clonePtr[i];
		++i;
	}

	free(ptr);

	return (reallocPtr);
}
