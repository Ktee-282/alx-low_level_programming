#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0-9
 * followed by a new line
 *
 * Return: No  return
 */

void print_most_numbers(void)
{
int num;

for (num = 48; num <= 57; num++)
{
if (num == 50 && num == 52)
{
continue;
}
_putchar(num);
}
}
