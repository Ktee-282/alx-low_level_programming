#include "main.h"

/**
 * mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: Always (0) success
 */

int mul(int a, int b)
{
	int product;

	product = a * b;

	if (a == '-' || b == '-')

		return (-product);

	else
		return (product);
}
