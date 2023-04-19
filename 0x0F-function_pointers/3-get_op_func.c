#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - Returns proper function needed based on @s
 * @s: The operator function to search for
 *
 * Return: NULL if @s is not in array else 0
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i;

	i = 0;
	while (i < (int)(sizeof(ops) / sizeof(op_t)))
	{
		if (ops[i].op && !strcmp(ops[i].op, s))
			return ops[i].f;
		i++;
	}

	return NULL;
}
