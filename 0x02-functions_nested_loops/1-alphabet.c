#include "main.h"

/**
 * main - prints the alphabet, in lowercase
 * Return: Always (0) success
 */

int main(void)
{
char alpha;

for (alpha = 97; alpha <= 122; alpha++)
{
_putchar(alpha);
}

_putchar('\n');

return (0);
}
