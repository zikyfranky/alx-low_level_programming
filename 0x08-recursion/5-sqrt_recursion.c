
/**
 * _sqrt_helper - get the natural square root of a number
 * @n: number to calculate the square root of
 * @c: iteration
 * Return: the resulting square root
 */
int _sqrt_helper(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + _sqrt_helper(n, c + 1));
}

/**
 * _sqrt_recursion - Prints the square root of @n
 *
 * @n: Number to get square root of
 *
 * Return: If n has a natural square root, the natural square root of @n
 * Otherwise, -1
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 2));
}
