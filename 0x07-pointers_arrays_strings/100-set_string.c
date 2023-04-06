#include "main.h"

/**
 * set_string - set value of a pointer to a char
 *
 * @s: Pointer
 * @to: Char to set pointer to
 *
 * Return: No return value
 */

void set_string(char **s, char *to)
{
	*s = to;
}
