#include <stdio.h>

/**
 * main - prints all possible combinations of three digits
 * Return: Always (0) success
 */

int main(void)
{
int num1, num2, num3, num4;

for (num1 = 48; num1 <= 57; num1++)
{
for (num2 = 48; num2 <= 56; num2++)
{
for (num3 = 48; num3 <= 57; num3++)
{
for (num4 = 49; num4 <= 57; num4++)
putchar(num1);
putchar(num2);
putchar(' ');
putchar(num3);
putchar(num4);
if (num1 == 57 num2 == 56 && num3 == 57 && num4 == 57)
{
break;
}
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
