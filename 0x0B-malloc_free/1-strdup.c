#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.
 *
 * @str: a pointer to be returned in new memory
 * Return: NULL if str=NULL and pointer on success
 */

char *_strdup(char *str)
{
	char *strcpy;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	
	while (str[i] != '\0')
	{
		i++;
	}
	strcpy = malloc(sizeof(char) * (i + 1));
	if (strcpy == NULL)
		return (NULL);
	for (j = 0; j < (i + 1); j++)
	{
		strcpy[j] = str[j];
	}
	return (strcpy);
}
