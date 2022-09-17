#include "main.h"

/**
 * main - prints the alphabet, in lowercase
 * Return: Always (0) success
 */

void print_alphabet(void)
{
char alpha[26] = {"abcdefghijklmnopqrstuvwxyz"};
int i;

for (i = 0; i < 26; i++)
{
_putchar(alpha[i]);
}

_putchar('\n');
}
