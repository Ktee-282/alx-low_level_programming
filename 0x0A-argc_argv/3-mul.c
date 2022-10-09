#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: first parameter
 * @argv: second parameter
 *
 * Return: 1 fi program doesn't recieve two arguments
 */

int main(int argc, char **argv)
{
	int i, num1, num2, product;

	if (agrc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; i < argc; i++)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
	}
	product = num1 * num2;
	printf("%d\n", product);
	return (0);
}
