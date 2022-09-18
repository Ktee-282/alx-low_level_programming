#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 *		Starting from 00:00 to 23:59
 *Return: 00:00 to 23:59
 */

void jack_bauer(void)
{
int a, b, c, d;

for (a = 48; a <= 50; a++)
{
for (b = 48; b <= 51; b++)
{
for (c = 48; c <= 53; c++)
{
for (d = 48; d <= 57; d++)
{
_putchar(a);
_putchar(b);
_putchar(':');
_putchar(c);
_putchar(d);
if (a == 50 && d == 57)
{
continue;
}
_putchar('\n');
}
}
}
}
}
