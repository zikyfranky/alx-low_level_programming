#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: Length of the command line arguments
 * @argv: Command line arguments
 *
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i++]);
	}
	return (0);
}
