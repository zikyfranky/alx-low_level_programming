#include <stdio.h>

/**
 * main - Entry Point - prints sum of even-valued Fibonacci
 *			sequence less than 4,000,000
 *
 * Return: 0
 */
int main(void)
{
	unsigned long num1 = 0, num2 = 1, sum;
	int total_sum = 0;

	while (1)
	{
		sum = num1 + num2;

		if (sum > 4000000)
			break;

		if (sum % 2 == 0)
			total_sum += sum;

		num1  = num2;
		num2 = sum;

	}
	printf("%d\n", total_sum);

	return (0);
}
