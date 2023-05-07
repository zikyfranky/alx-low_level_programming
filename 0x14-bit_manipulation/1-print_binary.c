#include "main.h"

/**
 * print_binary - Prints out binary of @n
 *
 * @n: Number to print out binary of
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int temp = n;
	int shifts = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	while ((temp >>= 1) > 0)
		shifts++;

	while (shifts >= 0)
	{
		if ((n >> shifts) & 1)
			printf("1");
		else
			printf("0");
		shifts--;
	}
}
