
/**
 * _sqrt_helper - Computes the natural square root of
 * a number between low and high.
 * @n: The number to compute the natural square root of.
 * @low: The low end of the range of numbers to search
 * for the natural square root.
 * @high: The high end of the range of numbers to search
 * for the natural square root.
 *
 * Return: If n has a natural square root between low and high,
 * the natural square root of n. Otherwise, -1.
 */
int _sqrt_helper(int n, int low, int high)
{
	int mid;

	if (low > high)
		return (-1);

	mid = (low + high) / 2;

	if (mid * mid == n)
		return (mid);
	else if (mid * mid > n)
		return (_sqrt_helper(n, low, mid - 1));
	else
		return (_sqrt_helper(n, mid + 1, high));
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
	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_helper(n, 1, n));
}
