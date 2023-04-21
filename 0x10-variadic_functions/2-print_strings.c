#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints all arguments
 * @separator: String to separate arguments
 * @n: Number of arguments
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

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
		char *v = va_arg(args, char *);

		if (v == NULL)
			printf("(nil)");
		else
			printf("%s", v);

		if (i < (n - 1) && separator)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
