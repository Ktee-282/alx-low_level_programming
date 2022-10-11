#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to char
 * @s2: pointer to char
 *
 * Return: *dest
 */
 int _strcmp(char *s1, char *s2)
{
int i, C;

i =0;

while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
{
i++;
}
C = s1[i] - s2[i];
return (C);
}
