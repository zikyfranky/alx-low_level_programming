#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: Length of the command line arguments
 * @argv: Command line arguments
 *
 * Return: 0
 */

int main(int argc, char const *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
