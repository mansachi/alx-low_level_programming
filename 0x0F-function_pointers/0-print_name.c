/* This is a program for 0-print_name.c */

#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - this will always print a name.
 * @name: this is the strng parameter.
 * @f: this is the pointer to the function onlly.
 *
 * Return: This will Always return Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
