#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point - Add multiple numbers
 *
 * @argc: Length of the command line arguments
 * @argv: Command line arguments
 *
 * Return: 1 if any argument isn't a number, otherwise 0
 */

int main(int argc, char const *argv[])
{
	int sum = 0, i = 1, j;

	while (i < argc)
	{
		int str_len = strlen(argv[i]);

		for (j = 0; j < str_len; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i++]);
	}

	printf("%d\n", sum);
	return (0);
}
