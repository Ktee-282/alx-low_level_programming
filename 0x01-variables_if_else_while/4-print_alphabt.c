#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, omitting letters q and e
 * Return: Always (0) success
 */
int main(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z';)
{
if (alpha == 'e' || alpha == 'q')
{
continue;
}
putchar(alpha);
}
putchar('\n');

return (0);
}
