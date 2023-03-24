#include <stdio.h>
#include <math.h>

/**
 * main - prints largest prime factor of the number 612852475143
 *
 * Return: 0
*/

int main(void)
{
long long i, n = 612852475143;

for (i = 2; i <= sqrt(n); i++)
{
while (n % i == 0)
{
n /= i;
}
}

if (n > 1)
{
printf("%lld\n", n);
}

return (0);
}
