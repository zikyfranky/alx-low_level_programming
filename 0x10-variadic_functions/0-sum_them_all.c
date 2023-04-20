#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Sums all arguments passed to the function
 * @n: This is the number of arguments that should be expected
 *
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i, j;
	va_list args;

	if (n == 0)
		return (0);

	/**
	 * man stdarg -> Docs
	 * va_start -> copies start point of @n to va_list args
	 * va_arg -> gets the current arg and automatically point to the next
	 * va_copy -> Copies start state to a new variable
	 * va_end -> Ends the whole process of variadic arghuments
	 */

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(args, int);

		sum += j;
	}

	va_end(args);

	return (sum);
}
