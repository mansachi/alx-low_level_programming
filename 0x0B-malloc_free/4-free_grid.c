/**
 * This is a program for the prototype-
 * void free_grid(int **grid, int height).
 */

#include <stdlib.h>
#include "main.h"

/**
 * free_grid - this will always free a 2 dimensional
 * grid created by malloc efficiently.
 *
 * @grid: this is a pointer to a 2 dimensional array only.
 * @height: this is a pointer array to the row size only.
 *
 * Return: This will Always return Nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
