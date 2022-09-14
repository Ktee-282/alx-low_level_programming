#include <stdio.h>

/**
 * main - prints the size of various types on the computer
 * Return: 0
 */

int main(void)
{
char c;
int i;
long li;
long long lli;
float f;

printf("Size of char: %1d byte(s)\n", sizeof(c));
printf("Size of int: %1d byte(s)\n", sizeof(i));
printf("Size of long int: %1d byte(s)\n", sizeof(li));
printf("Size of long long int: %1d byte(s)\n", sizeof(lli));
printf("Size of float: %1d byte(s)\n", sizeof(f));

return (0);
}
