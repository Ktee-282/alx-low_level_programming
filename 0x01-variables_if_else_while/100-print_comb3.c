#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0 (success)
 */

int main(void)
{
int numA, numB;

for (numA = 48; numA <= 57; numA++)
{
for (numB = 48; numB <= 57; numB++)
{
if (numA < numB)
{
putchar(numA);
putchar(numB);
if (numA != 57 || numB != 57)
{
putchar(',');
putchar(' ');
}
}
}
}

putchar('\n');
return (0);
}
