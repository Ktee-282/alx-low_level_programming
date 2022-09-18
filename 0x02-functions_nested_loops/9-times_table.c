#include "main.h"

/**
 * times_table - prints the 9 times table from 0
 * Return: 9 times table
 */

void times_table(void)
{
int i, j, op;

for (i = 48; i <= 57; i++)
{
_putchar(48);
for (j = 49; j <= 57; j++)
{
op = i * j;
_putchar(49);
_putchar(32);
if (op <= 57)
{
_putchar(32);
_putchar(op + 48);
}
else
{
_putchar((op / 10) + 48);
_putchar((op % 10) + 48);
}
}
_putchar('\n');
}
}
