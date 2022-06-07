#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
int n = 0;

while (n <= 10)
{
char ch = 'a';
for (; ch <= 'z'; ch++)
{
_putchar(ch);
}

n++;
_putchar('\n');
}

}
