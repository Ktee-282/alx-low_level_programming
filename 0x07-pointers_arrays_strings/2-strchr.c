#include "main.h"

/**
 * *_strchr - locates a character in a string
 * 
 * @s: string to search
 * @c: char to find
 * Return: pointer to the first occurence of the character
 * c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int k;

	while (2)
	{
		k = *s++;
		if (k == c)
		{
			return (s - 1);
		}
		if (k == 0)
		{
			return (NULL);
		}
	}
}
