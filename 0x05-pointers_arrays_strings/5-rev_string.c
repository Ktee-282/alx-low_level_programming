#include "main.h"


/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
char str;
int i, strl, strl2;

strl = 0;
strl2 = 0;

while (s[strl] != '\0')
{
strl++;
}
strl2 = strl - 1;

for (i = 0; i < strl / 2; i++)
{
str = s[i];
s[i] = s[strl2];
s[strl2--] = str;
}
}
