/**
 * This is a program for the prototype- int main(int argc, char *argv[]) -
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - this will always multiply two numbers received through the command line efficiently.
 * @argc: this is the number of the command line arguments only.
 * @argv: this is the array containing the program command line arguments only.
 *
 * Return: This will Always be 0 if Success, Otherwise return 1.
 */

int main(int argc, char *argv[])
{
	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
