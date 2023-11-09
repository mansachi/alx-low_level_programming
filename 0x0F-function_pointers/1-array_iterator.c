/* Program for 1-array_iterator.c */

#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - this will always call a
 * function that iterates over an array efficiently
 *
 * @array: this is the array pointer only.
 * @size: this is the array size only.
 * @action: this is the pointer to the function only.
 *
 * Return: This will Always return Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size > 0 && array && action)
	{
		for (i = 0; i < size; ++i)
			action(array[i]);
	}
}
