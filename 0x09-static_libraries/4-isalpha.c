#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: ASCII
 *
 * Return: 1 if c is lower or uppercase otherwisse, 0
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}
