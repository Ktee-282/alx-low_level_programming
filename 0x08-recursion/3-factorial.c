#include "main.h"

/**
 * factorial - returns the factorial of a gievn number
 * @n: An integer
 *
 * Return: -1 if n<0, 1 if n==0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
