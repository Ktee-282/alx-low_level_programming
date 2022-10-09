#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: first parameter
 * @argv: second parameter
 *
 * Return: 1 if one of the number
 * contains symbols that are not digits
 */

int main(int argc, char **argv)
{
	int i, res;

	res = 0;

	for (i = 0; i < argc; i++)
	{
		if (i > 0)
		{
			if (atoi(argv[i]) == 0)
			{
				return (printf("Error\n"), 1);
			}
			res += atoi(argv[i]);
		}
	}
	printf("%d\n", res);
	return (0);
}
