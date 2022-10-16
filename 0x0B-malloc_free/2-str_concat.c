#include <stdio.h>
#include <stdlib.h>

int _strlen(char *str);
/**
 * str_concat - Concatenate/joins two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: A concatenated string from s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int x, y, a, b;

	x = y = a = b = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[x] != '\0')
	{
		x++;
	}

	while (s2[y] != '\0')
	{
		y++;
	}

	concat = malloc(sizeof(char) * (x + y + 1))
	if (concat == NULL)
		return (NULL);

	while (s2[a] != '\0')
	{
		concat[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		concat[a] = s2[b];
		a++;
		b++;
	}
	concat[a] = '\0';
	return (concat);
}
