#include "main.h"

/**
 * print_last_digit -
 * @n: An integer
 * Return: Always 0 (success)
 */

int print_last_digit(int n)
{
if (n < 0)
{
n = ((-1) * (n % 10));
return (n);
}
else
{
n = (n % 10);
return (n);
}
}
