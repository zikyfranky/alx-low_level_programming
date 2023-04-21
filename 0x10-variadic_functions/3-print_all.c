#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints all arguments
 * @format: List of types of arguments
 * c:char, i:int, f:float, s: char *
 *
 */

void print_all(const char *const format, ...)
{
	int i;
	char *s, *sep = "";
	va_list args;

	va_start(args, format);

	i = 0;
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (!s)
					s = "(nil)";
				printf("%s%s", sep, s);
				break;
			default:
				break;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(args);
}
