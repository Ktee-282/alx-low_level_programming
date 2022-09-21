#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string
 *
 * Return: void
 */

void print_rev(char *s)
{
int i, j, strl;

i = 0;
while (s[i] != '\0')
{
i++;
}

strl = i;

for (j = strl - 1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
