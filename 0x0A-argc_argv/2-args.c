/**
 * This is a program for the prototype- int main(int argc, char *argv[]) -
 */

#include <stdio.h>

/**
 * main - this will always print all arguments received through the command line efficiently.
 * @argc: this is the number of command line arguments only.
 * @argv: this is the array containing the program command line arguments only.
 *
 * Return: This will ALways return Success.
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; ++i)
			printf("%s\n", argv[i]);
	}

	return (0);
}
