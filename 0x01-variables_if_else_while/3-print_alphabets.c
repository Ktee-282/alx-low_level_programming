#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase
 * Return: Always (0) success
 */

int main(void)
{
char alpha;
for (alpha = 97; alpha <= 122;)
{
putchar(alpha);
alpha++;
}
for (alpha = 65; alpha <= 90;)
{
putchar(alpha);
alpha++;
}
putchar('\n');
return (0);
}
