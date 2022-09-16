#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always (0) success
 */

int main(void)
{
int comb, comb2;

for (comb = 48; comb = 57; comb++)
{
for (comb2 = 49; comb2 = 57; comb2++)
{
putchar(comb);
putchar(comb2);
putchar(',');
putchar(' ');
if (comb == 56 && comb2 == 57)
{
continue;
}
}
}
putchar('\n');
return (0);
}
