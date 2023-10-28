/**
 * This is a program for the prototype- int main(int argc, char *argv[]) -
 */

#include <stdio.h>

/**
 * main - this will always print name of the program efficiently.
 * @argc: this will always be the number of command line arguments only.
 * @argv: this will always be an array containing the program command line arguments only.
 *
 * Return: This will ALways return Success.
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
