/* This is a program for 2-int_index.c */

#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - this will always search for the
 * integer value in the array effifciently.
 *
 * @array: this is the array pointer only.
 * @size: this is the array size only.
 * @cmp: this is the pointer to function which
 * compares values only.
 *
 * Return: This will Always return Success,
 * Otherwise, return fail (-1).
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array || !cmp)
		return (-1);

	for (i = 0; i < size; ++i)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
