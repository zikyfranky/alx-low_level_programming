#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point - Multiply 2 numbers
 *
 * @argc: Length of the command line arguments
 * @argv: Command line arguments
 *
 * Return: 1 if argument is less than 3, otherwise 0
 */

int main(int argc, char const *argv[])
{
	int product;

	if (argc < 3)
	{
		printf("Error\n");

		return (1);
	}

	product = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", product);
	return (0);
}
