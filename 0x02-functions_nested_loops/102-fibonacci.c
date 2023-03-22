#include <stdio.h>

/**
 * main - Entry Point - prints first 50 Fib Sequence
 *
 * Return: 0
 */
int main(void)
{
	int count;
	unsigned long num1 = 0, num2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = num1 + num2;
		printf("%ld", sum);

		num1  = num2;
		num2 = sum;

		printf("%s", count == 49 ? "\n" : ", ");
	}

	return (0);
}
