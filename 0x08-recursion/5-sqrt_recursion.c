#include "main.h"

/**
 * is_square_root/

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
	return (is_square_root(n - 1));
}
