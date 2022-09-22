#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @src: pointer to char
 * @dest: pointer to char
 * @n: integer
 *
 * Return: a pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = j = 0;

for (; i < 1000; i++)
{
if (dest[i] == '\0')
{
break;
}
j++;
}

for (; src[i] != '\0' && i < n; i++)
{
dest[j + i] = src[i];
}

dest[j + i] = '\0';
return (dest);
}
