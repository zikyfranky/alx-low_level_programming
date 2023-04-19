#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry for the main program
 * @argc: The total number of arguments
 * @argv: Array of values of Arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*op)(int, int);

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = get_op_func(argv[2]);

	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
