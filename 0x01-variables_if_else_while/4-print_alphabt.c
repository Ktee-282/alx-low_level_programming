#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, omitting letters q and e
 * Return: Always (0) success
 */
int main(void)
{
	char alpha;

	for (alpha = 97; alpha <= 122;)
	{
		if (alpha == 101 || alpha == 113)
		{
			continue;
		}
		putchar(alpha);
	}
	putchar('\n');
	
	return (0);
}
