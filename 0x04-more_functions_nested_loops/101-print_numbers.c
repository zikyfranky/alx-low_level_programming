#include "main.h"

/**
 * print_number - Prints an integer
 *
 * @n: Integer to print
*/

void print_number(int n)
{

unsigned int i = n;

if (n < 0)
{
_putchar(45);
i = -1;
}
if (i / 10)
{
print_number(i / 10); /* Recursive call */
}
_putchar(i % 10 + 48);
}
