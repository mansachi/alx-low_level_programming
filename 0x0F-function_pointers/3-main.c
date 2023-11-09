/* program fro file 3-main.c */

#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - this will validate input number
 * and the operator.
 *
 * @argc: this is the number of command
 * line arguments only.
 * @argv: this is an array containing
 * the program command line arguments.
 *
 * Return: This will Always be 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
