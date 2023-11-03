/**
 * Tgis is a program for the prototype-
 * int *array_rangeint min, int max
 */

#include <stdlib.h>
#include "main.h"

/**
 * array_range - this will always create and array
 * of integers making use of malloc efficiently.
 *
 * @min: this is the integer parameter only.
 * @max: this is the integer 
 *
 * Return: This will Always be a Pointer to the 
 * newly created array, or NULL if it fails.
 */

int *array_range(int min, int max)
{
	int *newArray, *temp;

	if (min > max)
		return (NULL);

	newArray = malloc((max - min + 1) * sizeof(int));

	if (!newArray)
		return (NULL);

	temp = newArray;

	while (min <= max)
		*temp++ = min++;

	return (newArray);
}
