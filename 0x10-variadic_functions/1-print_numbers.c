/* a program for file 1-print_numbers.c */

#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - this will always  print
* numbers, followed by a new line.
*
* @separator: this is the string to be
* printed between numbers.
* @n: this is the number of integers passed to the function.
*
* Return: This will always return Nothing.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (n != 0)
	{
		va_start(list, n); /* this will initialize the argument list. */

		for (i = 0; i < n - 1; i++)
		{
			printf("%d", va_arg(list, int)); /* this will get and print the next argument value. */
			if (separator)
				printf("%s", separator);
		}
		printf("%d", va_arg(list, int)); /* this will print the last argument value */

		va_end(list); /* this will clean up the argument list. */
	}
printf("\n");
}
