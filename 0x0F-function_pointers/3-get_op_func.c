/* program for file 3-get_op_func.c */

#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - this is the function pointer
 *
 * @s: this is the operator passed as arguments only.
 *
 * Return: This will Always return Pointer to function,
 * Otherwise, fail.
 */

int (*get_op_func(char *s))(int num1, int num2)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	
	int i = 0;

	while (ops[i].op)
	{
		if (*s == *(ops[i].op) && *(s + 1) == '\0')
			return (ops[i].f);

		++i;
	}

	return (NULL);
}
