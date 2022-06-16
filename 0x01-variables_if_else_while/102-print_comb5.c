#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (success)
 */

int main(void)
{
int i, j, k, l;

for (i = 48; i <= 57; i++)
{
for (j = 48; j <= 57; j++)
{
for (k = 48; k <= 57; k++)
{
for (l = 48; l <= 57; l++)
{
if (((i + j) < (k + l) && (i <= k)) || k > i)
{
putchar(i);
putchar(j);
putchar(' ');
putchar(k);
putchar(l);
if (i + j + k + l == 227 && i == 57)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
}

putchar('\n');
return (0);
}
