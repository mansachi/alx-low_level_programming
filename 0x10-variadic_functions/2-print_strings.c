/* a program for file 2-print_strings.c */

#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings -this will always print strings
* followed by a new line.
*
* @separator: this is the string to be printed
* between strings.
* @n: this is the number of strings passed to the function.
*
* Return: This will always return Nothing.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char*); /* This will get the next value. */
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	va_end(list); /* this cleans up the argument list. */
	printf("\n");
}
