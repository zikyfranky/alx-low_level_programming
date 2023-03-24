#include "main.h"

/**
 * more_numbers - Print numbers from 0 to 14 (10 times)
*/

void more_numbers(void)
{
int row, num, count;
for (row = 0; row < 10; row++)
{
for (count = 0; count < 15; count++)
{
num = count;
if (num > 9)
{
_putchar(49); /** ASCII value for 1 */
num = count % 10; /** Get Last Number */
}
/*
 * if the if statement is true, it prints the last digit appended to 1
 * else it prints the actual number(+48 to get the ASCII)
 */
_putchar(num + 48);
}
_putchar('\n');
}
}
