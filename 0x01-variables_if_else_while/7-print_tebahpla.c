#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * Return: Always (0) success
 */

int main(void)
{
char alpha;

for (alpha = 'z'; alpha >= 'a';)
{
putchar(alpha);
alpha--;
}
putchar('\n');
return (0);
}
