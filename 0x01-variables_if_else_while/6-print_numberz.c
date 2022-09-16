#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * Return: Always (0) success
 */

int main(void)
{
int num;

for (num = 48; num <= 57;)
{
putchar(num);
num++;
}
putchar('\n');
return (0);
}
