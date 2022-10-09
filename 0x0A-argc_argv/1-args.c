#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: arguments count
 * @argv: string array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%d\n", argc);
	}
}
