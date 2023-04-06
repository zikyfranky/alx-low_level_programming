/* #include <stdio.h> */
#include "main.h"

/**
 * _puts_recursion - function that prints a string followed by a line
 *
 * @s: String to be printed
 *
 * Return: No return value
 */

void _puts_recursion(char *s)
{
	/*You could easily use puts from the stdio library*/
	/*puts(s);*/

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
