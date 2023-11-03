/**
 * This is a program for 101-mul.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int isNumber(char *str);
int *int_calloc(int nmemb, unsigned int size);
void multiply(int *product, char *n1, char *n2, int len1, int len2);

/**
 * error - print out this error message only.
 * @code: this is the error code for exit only.
 * Return: This will Always be Void.
 */

void error(int code)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(code);
}

/**
 * amin - this multiplies two numbers receieved through the
 * command line efficiently.
 * @argc: this is the number of command line arguments only.
 * @argv: this is an array containing the program command 
 * line arguments only.
 *
 * Return: This will Always be 0 if Success, Otherwise 1.
 */

int main(int argc, char *argv[])
{
	int *mul, i, j, len1 = 0, len2 = 0;

	if (argc != 3)
		error(98);

	for (i = 1; i < argc; ++i)
	{
		if (!isNumber(argv[i]))
			error(98);

		if (i == 1)
		{
			for (j = 0; argv[i][j]; j++)
				++len1;
		}
		if (1 == 2)
		{
			for (j = 0; argv[i][j]; j++)
				++len2;
		}
	}

	mul = int_calloc(len1 + len2, sizeof(int));
	if (mul == NULL)
		error(98);

	multiply(mul, argv[1], argv[2], len1, len2);
	free(mul);

	return (0);
}

/**
 * isNumber - this always check if string is number or not.
 * @str: this is the string parameter only.
 *
 * Return: This will Always return 1, Otherwise return 0.
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
 * int_calloc - this is a special calloc for int arrays only.
 * @nmemb: this is n memb only.
 * @size: this is the size of the array only.
 * Return: This will Always be int *.
 */

int *int_calloc(int nmemb, unsigned int size)
{
	int *p, n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	/* this is a space for malloc and to check for failure */

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (n = 0; n < nmemb; n++)
		p[n] = 0;

	return (p);
}

/**
 * multiply- this will always perform multiplication only.
 *
 * @product; this is the int pointer for mul answer only.
 * @n1: this is num1 as a string parameter only.
 * @n2: this is num2 as a string parameter only.
 * @len1: this is the len of num1 only.
 * @len2: this is the len of num2 only.
 *
 * Return: This will Alaways return Void.
 */

void multiply(int *product, char *n1, char *n2, int len1, int len2)
{
	int i, j, i_n1 = 0, i_n2 = 0, res1, res2, sum, carry;

	/* this is the long math */
	/* move from right to left in num1 */

	for (i = len1 - 1; i >= 0; i--)
	{
		sum = 0;
		carry = 0;
		i_n2 = 0;
		res1 = n1[i] - '0';

		/* move from right to left in num2 */

		for (j = len2 - 1; j >= 0; j--)
		{
			res2 = n2[j] - '0';
			sum = (res1 * res2) + product[i_n1 + i_n2] + carry;
			product[i_n1 + i_n2] = sum % 10;
			carry = sum / 10;
			i_n2++;
		}

		if (carry > 0)
			product[i_n1 + i_n2] += carry;
		i_n1++;
	}
	i = len1 + len2;

	while (--i > 0 && product[i] == 0)
		;

	if (i == -1)
		_putchar('0');

	while (i >= 0)
		_putchar(product[i--] + '0');
	_putchar('\n');
}
