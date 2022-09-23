#include "main.h"

/**
 * *lest - encodes a string into * @s: pointer to char
 * @s: pointer to char
 *
 * Return: *s
 */

char *lest(char *s)
{
	int i, j;
	char l[] = "ol_ea__t";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j] || s[i] == (l[j] - 32))
			{
				s[i] = j + '0';
			}
		}
	}
	return (s);
}
