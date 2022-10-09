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
	int sum;

	for (sum = 0; sum < argc; sum++)
	{
		*argv[sum] = *argv[sum];
	}
	printf("%d\n", (sum - 1));
	return (0);
}
