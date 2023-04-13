#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point - Print minimum coins to make change for
 *
 * @argc: Length of the command line arguments
 * @argv: Command line arguments
 *
 * Return: 1 if no argument, otherwise 0
 */

int main(int argc, char const *argv[])
{
	int number, qrtrs, dimes, nickels, twos, ones;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);

	if (number < 0)
	{
		printf("0\n");
		return (0);
	}

	qrtrs = number / 25;
	number %= 25;
	dimes = number / 10;
	number %= 10;
	nickels = number / 5;
	number %= 5;
	twos = number / 2;
	number %= 2;
	ones = number;

	printf("%d\n", qrtrs + dimes + nickels + twos + ones);

	return (0);
}
