/**
 * This is a program for the prototype- int main(int argc, char *argv[] __attribute__((unused)))) -
 */

#include <stdio.h>

/**
 * main - this will always print the number of arguments passed to the command line efficiently.
 * @argc: this is the number of command line arguments only.
 * @argv: this is the array containing the program command line arguments only.
 *
 * Return: This will Always return Success.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
