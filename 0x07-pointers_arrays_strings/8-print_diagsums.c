#include "main.h"

/**
 * print_diagsums - this prints all th sums of square array diagonal efficiently only.
 *
 * @a: this is a pointer only.
 * @size: this is a size only.
 */

void print_diagsums(int *a, int size)
{
	int i, sumd1 = *a, sumd2 = 0;

	for (i = 1; i <= size ; ++i)
	{
		if (i != size)
			sumd1 += *(a + (i * size) + i);

		sumd2 += *(a + (size - 1) * i);
	}

	printf("%d, ", sumd1);
	printf("%d\n", sumd2);
}
