#include <ctype.h>

/**
 * _isdigit - Check if @c is a digit from 0 to 9
 * @c: Number to check
 *
 * Return: 1 if it's a digit, 0 otherwise
*/

int _isdigit(int c)
{
return (isdigit(c) ? 1 : 0);
}
