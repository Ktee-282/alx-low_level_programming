#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the alphabet in lowercase
 * Return: Always (0) success
 */

int main(void)
{
char alpha;

for(alpha = 'a'; alpha <= 'z')
{
putchar(alpha);
alpha++;
}

return (0);
}
