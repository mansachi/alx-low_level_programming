/**
 * This is a program for the prototype- int isNumber(char *str) -
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * isNumber - this will always check if the string is number or not efficiently.
 * @str: this is the string parameter only.
 *
 * Return: This will Always be 1 if number, Otherwise 0.
 */

int isNumber(char *str)
{
	int j = strlen(str);

	while (j--)
	{
		if (str[j] > 47 && str[j] < 58)
			continue;
		return (0);
	}

	return (1);
}

/**
 * main - this will always add positive numbers received by the command line efficiently.
 * @argc: this is the number of command line arguments only.
 * @argv: this is the array containing the program command line arguments only.
 *
 * Return: This will Always be 0 if Success, Otherwise return 1.
 */

int main(int argc, char *argv[])
{
	int i, sum = 0, count = 0;

	if (argc - 1 > 0)
	{
		for (i = 1; i < argc; ++i)
		{
			if (!isNumber(argv[i]))
				++count;
			else
				sum += atoi(argv[i]);
		}
	}

	if (argc - 1 == 0 || count == argc - 1)
		printf("0\n");

	else if (count > 0)
	{
		printf("Error\n");
		return (1);
	}

	else
		printf("%d\n", sum);

	return (0);
}
