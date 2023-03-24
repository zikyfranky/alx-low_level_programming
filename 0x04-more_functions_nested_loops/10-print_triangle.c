#include "main.h"

/**
 * print_triangle - Draws a traingle
 *
 * @size: The size of the traingle
*/

void print_triangle(int size)
{

int row, col, spaces;

if (size <= 0)
{
_putchar('\n');
}

for (row = 1; row <= size; row++)
{
for (spaces = size - row; spaces >= 1; spaces--)
{
_putchar(' ');
}
for (col = 1; col <= row; col++)
{
_putchar('#');
}

_putchar('\n');
}
}
