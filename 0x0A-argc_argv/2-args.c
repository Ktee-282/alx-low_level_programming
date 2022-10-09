#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: argument count
 * @argv: string array
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc >= 1)
	{
		int i;

		for (i = 0; i < argc; i++)
		{
			printf("argv[%d] = %s\n", i, argv[i]);
		}
	}
	return (0);
}
