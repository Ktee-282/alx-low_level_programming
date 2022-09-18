#include <stdio.h>

/**
 * main - prints the addof the Fibonacci numbers
 *
 * Return: Always (0) success
 */

int main(void)
{
int d;
long int n1, n2, fn;

n1 = 1;
n2 = 2;
printf("%1d, %1d", n1, n2);
for (d = 0; d < 48; d++)
{
fn = n1 + n2;
printf(", %1d", fn);
n1 = n2;
n2 = fn;
}
printf("\n");
return (0);
}

