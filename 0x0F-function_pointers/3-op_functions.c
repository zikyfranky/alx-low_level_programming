#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Calculates the sum of @a and @b
 * @a: First Integer
 * @b: Second Integer
 *
 * Return: Sum of @a and @b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Calculates the difference between @a and @b
 * @a: First Integer
 * @b: Second Integer
 *
 * Return: Difference between @a and @b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Calculates the product of @a and @b
 * @a: First Integer
 * @b: Second Integer
 *
 * Return: Product of @a and @b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Calculates the result of division of @a and @b
 * @a: First Integer
 * @b: Second Integer
 *
 * Return: Result of division of @a and @b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Calculates the remainder of division of @a and @b
 * @a: First Integer
 * @b: Second Integer
 *
 * Return: Remainder of division of @a and @b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
