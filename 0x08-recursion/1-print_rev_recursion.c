/* #include <stdio.h> */
#include "main.h"

/**
 * _print_rev_recursion - Recursively reverse a string
 *
 * @s: String to be printed
 *
 * Return: No return value
 */

void _print_rev_recursion(char *s)
{
	/*You could easily use puts from the stdio library*/
	/*puts(s);*/

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
