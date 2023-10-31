/**
 * This is a program for the prototype-
 * int **alloc_grid(int width, int height).
 */

#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - this will always create a pointer,
 * to a 2 dimensional array of integers efficiently.
 *
 * @width: this is the array column size only.
 * @height: this is the array row size only.
 *
 * Return: This will ALways be a Pointer to the Array, Otherwise NULL if it fails.
 */

int **alloc_grid(int width, int height)
{
	int **newArray, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	newArray = malloc(height * sizeof(int *));
	if (newArray == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		newArray[i] = malloc(width * sizeof(int));
		if (newArray[i] == NULL)
		{
			for (; i >= 0; i--)
				free(newArray[i]);
			free(newArray);
			return (NULL);
		}

		for (j = 0; j <= width; j++)
			newArray[i][j] = 0;
	}

	return (newArray);
}
