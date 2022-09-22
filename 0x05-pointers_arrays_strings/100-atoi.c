#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Returned: the int converted from the string
 */

int _atoi(char *s)
{
int a, b, c, d, len, dgt;

a = 0;
b = 0;
c = 0;
d = 0;
len = 0;
dgt = 0;

while (s[len] != '\0')
{
len++;
}

while (a < len && d == 0)
{
if (s[a] == '-')
{
++d;
}

if (s[a] >= '0' && s[a] <= '9')
{
dgt = s[a] - '0';
if (b % 2)
{
dgt = -dgt;
}
c = c * 10 + dgt;
d = 1;
if (s[a + 1] < '0' || s[a + 1] > '9')
{
break;
}
d = 0;
}
a++;
}
if (d == 0)
{
return (0);
}
return (c);
}
