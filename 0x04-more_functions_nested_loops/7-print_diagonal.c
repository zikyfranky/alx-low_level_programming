#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 *
 * @n: The number of times the character \ should be printed
*/

void print_diagonal(int n)
{
while (n > 0)
{
_putchar('\\');
n--;
}

_putchar('\n');
}
