#include <stdio.h>

/**
 * main - program that prints the numbers from 1-100,
 * But for multiples of three print FIzz instead of the number
 * and for the multiples of five print Buzz. For numbers which are
 * multiples of both three and five print FizzBuzz
 *
 * Return: Always (0) success
 */

int main(void)
{
int z;

z = 1;
printf("%d", z);
for (z = 2; z <= 100; z++)
{
if ((z % 3 == 0) && (z % 5 == 0))
{
printf(" FizzBuzz");
}
else if (z % 3 == 0)
{
printf(" Fizz");
}
else if (z % 5 == 0)
{
printf(" Buzz");
}
else
{
printf("%d", z);
}
}
printf("\n");
return (0);
}
