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
	if (argc == 1)
	{
		printf("0\n");
	}
	else if (!(argv[] <= 1000000))
	{
		return (printf("Error\n"), 1);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			num1 = atoi(argv[1]);
			num2 = atoi(argv[2]);
		}
		sum = num1 + num2;
		printf("%d\n", sum);
	}
	return (0);
}
