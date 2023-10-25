#include "main.h"

/**
 * print_chessboard - this prints the chessboard efficiently only.
 * @a: this is the array character only.
 *
 * Return: This is Always 0 only.
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; ++i)
	{
		j = 0;
		while (j < 8)
		{
			putchar(a[i][j]);
			++j;
		}
		putchar('\n');
	}
}
