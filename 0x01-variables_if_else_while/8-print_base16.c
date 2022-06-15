#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase, followed by a new line
 * Return: Always 0 (success)
 */

int main(void)
{
char num, ch;

for (num = 48; num <= 57; num++)
{
putchar(num);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}

putchar('\n');
return (0);
}
