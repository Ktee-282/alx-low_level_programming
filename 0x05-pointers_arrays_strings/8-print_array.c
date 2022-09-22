#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: array to be printed
 * @n: number of elements to be printed
 *
 * Return: void
 */

void print_array(int *a, int *n)
{
int i, j;

j = *n;

for (i = 0; i < j; i++)
{
if (n == 0)
{
printf("%d", a[i]);
}
else
{
printf(", %d", a[i]);
}
}
printf("\n");
}
