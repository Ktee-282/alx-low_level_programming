#include <stdio.h>

/**
 * main - prints _putchar
 * Return: Always (0) success
 */

int main(void)
{
	char *ch, i;

	ch = "_putchar";
	i = 0;

	for (; i <= 7; i++)
	{
	_putchar(ch[i]);
	}
}
