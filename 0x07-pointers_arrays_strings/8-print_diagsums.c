#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of
 * a square matrix of integers.
 *
 * @a: 2 Matrix Square Array of @size
 * @size: Length of the array
 *
 * Return: No return value
 */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum = 0, sum1 = 0;

	for (i = 0; i < size; i++)
	{
		/*
		 * Assume that size is  3
		 * Example -> { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }
		 * First index would be
		 * (size * i) + i -> 3 * 0 + 0 -> 0 + 0 -> 0
		 * Second index would be
		 * (size  * (i + 1)) - (i + 1) -> (3 * (0 + 1)) - (0 + 1)
		 * -> (3 * (1)) - (1) -> 3 - 1 -> 2
		 * Indices for the first would be like so [0, 4, 8]
		 * Indices for the second would be like so [2, 4, 6]
		 * Checking the indices, this would make an X sign
		 * Which is basically our diagonal values
		 * This won't look like it works, since each row is just 2 indices
		 * But accourding to the project, they are typecasting int[][] to
		 * int * which means our example changes to
		 * {1, 2, 3, 4, 5, 6, 7, 8, 9} -> 1 dimensional array
		 * Sum would be a[0] + a[4] + a[8] -> 1 + 5 + 9 -> 15
		 * Sum1 would be a[2] + a[4] + a[6] -> 3 + 5 + 7 -> 15
		 */
		int first_diagonal_index = (size * i) + i;
		int second_diagonal_index = (size * (i + 1)) - (i + 1);

		sum += a[first_diagonal_index];
		sum1 += a[second_diagonal_index];
	}

	printf("%d, %d\n", sum, sum1);
}
