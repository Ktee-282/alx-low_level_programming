#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 * Return: Always (0) success
 */

int main(void)
{
int num16;
char alpha16;

for (num16 = 48; num16 <= 57; num16++)
{
putchar(num16);
}
for (alpha16 = 97; alpha16 <= 102; alpha16++)
{
putchar(alpha16);
}
putchar('\n');
return (0);
}
