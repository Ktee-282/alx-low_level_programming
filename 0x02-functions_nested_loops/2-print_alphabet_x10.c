#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase, followed by a new line
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
int n = 1;
char ch = 'a';

while (n <= 10)
{
for(; ch <= 'z';)
{
_putchar(ch);
ch++;
}
n++;
_putchar('\n');
}

}
