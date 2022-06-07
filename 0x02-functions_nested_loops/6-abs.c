#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: integer
 * Return: Always 0 (success)
 */

int _abs(int c)
{
if (c < 0)
{
return (c * (-1));
}
else if (c == 0)
{
return (0);
}
else
{
return (c);
}
}
