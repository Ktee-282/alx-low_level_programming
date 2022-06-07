#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char ch = 'a';

	for (; ch <= 'z';)
	{
	 _putchar(ch);
	 ch++;
	}
	
	_putchar('\n');
	return (0);
}
