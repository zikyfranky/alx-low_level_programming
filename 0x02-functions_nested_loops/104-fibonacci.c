#include <stdio.h>

/**
 * main - Entry Point - prints first 98 Fib Sequence
 *
 * Return: 0
 */
int main(void)
{
	int count;
	unsigned long num1 = 0, num2 = 1, sum;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long half1, half2;
	
	for (count = 0; count < 92; count++)
	{
		sum = num1 + num2;
		printf("%lu,  ", sum);

		num1  = num2;
		num2 = sum;
	}
	
	fib1_half1 = num1 / 10000000000;
	fib2_half1 = num2 / 10000000000;
	fib1_half2 = num1 % 10000000000;
	fib2_half2 = num2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half1 = fib1_half1 + fib2_half1;
		half2 = fib1_half2 + fib2_half2;
		if (fib1_half2 + fib2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);

		printf("%s", count == 98 ? "\n" : ", ");

		fib1_half1 = fib2_half1;
		fib1_half2 = fib2_half2;
		fib2_half1 = half1;
		fib2_half2 = half2;
	}

	return (0);
}
