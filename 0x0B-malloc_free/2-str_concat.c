#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1:pointer to string one
 * @s2:pointer to string two
 *
 * return: A concatenated string from s1 and s2 and;
 * NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *strjoin;
	int i, j, x, y, strlen;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;

	while (s1[i] != '\0')
		i++;

	j = 0;

	while (s2[j] != '\0')
		j++;

	strjoin = malloc(sizeof(char) * (i + j + 1));
	if (strjoin == NULL)
		return (NULL);

	x = 0;
	while (s1[x] != '\0')
	{
		strjoin[x] = s1[x];
		x++;
	}
	y = 0;
	while (s2[y] != '\0')
	{
		strjoin[x] = s2[y];
		x++;
		y++;
	}
	strjoin[x] = '\0';
	return (strjoin);
}
