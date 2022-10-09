#include "main.h"

/**
 * is_square_root - determines the square root of
 * @j: an input value
 * @i: input value
 * Return: the input value
 */

int is_square_root(int i,  int j)
{
	if (j * j > i)
	{
		return (-1);
	}
	if (j * j == i)
	{
		return (j);
	}
	return (is_square_root(i, j + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: An integer
 *
 * Return: -1 if n doesn't have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (is_square_root(n, 1));
}
