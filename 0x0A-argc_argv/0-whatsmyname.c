#include <stdio.h>

/**
 * main - prints file's name, followed by a new line
 * @argc: argument count
 * @argv: array of strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
