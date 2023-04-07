#include <stdio.h>

/**
 * _check_prime - recursively check if n is prime
 *
 * @n: number to check;
 * @prev: prev number
 *
 * Return: 1 if n is prime and 0
 */

int _check_prime(int n, int prev)
{

	if (prev == 1) /*n is 2 at this point*/
		return (1);

	if (n % prev == 0 && n > 0)
		return (0);

	return (_check_prime(n, prev - 1));
}

/**
 * is_prime_number - Checks if the number is prime
 *
 * @n: Number to check
 *
 * Return: 1 if prime number else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_check_prime(n, n - 1));
}
