#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 *
 * @n: The number of times the character \ should be printed
*/

void print_diagonal(int n)
{
    int row, col;

    if (n <= 0)
    {
        _putchar('\n');
    }

    for (row = 0; row < n; row++)
    {
        for ( col = 0; col < row; col++)
        {
            _putchar(' ');
        }
        _putchar('\\');
        _putchar('\n');
    }
}
