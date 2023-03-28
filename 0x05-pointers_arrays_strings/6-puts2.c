#include <string.h>
#include "main.h"

/**
 * _puts2 - Takes a string and prints it (skipping every 2 characters)
 *
 * @str: The string to print out
 *
 */

void puts2(char *str)
{
	int i, len = strlen(str);

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
