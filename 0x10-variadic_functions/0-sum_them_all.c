/* a program for file 0-sum_them_all.c */

#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* sum_them_all - this will always compute
* sum of all the parameters.
*
* @n: this is the number of parameters
* passed to the function only
*
* Return: This will always return sum,
* Otherwise, fail.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n); /* this will initialize the argument list. */

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);    /* this will get the next argument value. */

	va_end(list); /* this will clean up the argument list. */

return (sum);
}
