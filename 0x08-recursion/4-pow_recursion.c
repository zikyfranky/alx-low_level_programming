/**
 * _pow_recursion - Prints the factorial of a number @n.
 *
 * @x: Number to raise to the power of @y
 * @y: Raise @x to this number
 *
 * Return: X**Y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
