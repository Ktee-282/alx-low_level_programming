#include <stdio.h>

/**
 * main - prints file's name, followed by a new line
 *
 * Return: program's name
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
