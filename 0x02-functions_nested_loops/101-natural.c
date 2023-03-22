#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 on success, -1 on failure
 */
int main(void)
{
	int start, sum = 0;

	for (start = 1; start < 1024; start++)
	{
		if (start % 3 == 0 || start % 5 == 0)
			sum += start;
	}

	printf("%d\n", sum);

	return (0);
}
