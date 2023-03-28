#include <string.h>
#include "main.h"

/**
 * print_rev - Takes a string and prints it backwards to stdout
 *
 * @str: The string to reverse and print out
 *
 */

void print_rev(char *str)
{
	int len = strlen(str);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
