#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
int n = 0;
char ch = 'a';

while (n <= 10)
{
for (; ch <= 'z';)
{
_putchar(ch);
ch++;
}
_putchar('\n');
n++;
}

}
