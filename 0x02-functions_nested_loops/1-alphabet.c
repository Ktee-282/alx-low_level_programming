#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 (success)
 */

int main(void)
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
