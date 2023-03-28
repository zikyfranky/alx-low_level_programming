#include <string.h>
#include "main.h"

/**
 * puts_half - Prints half of the string
 *
 * @str: The string to print half of
 *
 */

void puts_half(char *str)
{
	int i, len = strlen(str);
	/*"Hello" -> (5-1)/2 -> 4/2 -> 2 -> "llo"*/
	/*"Hell" -> 4/2 -> 2 -> "ll"*/
	int startFrom = len % 2 == 0 ? len / 2 : (len - 1) / 2;

	for (i = startFrom; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
