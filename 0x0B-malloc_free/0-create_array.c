#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - This function creates an array.
 * @size : Unsigned int size of the array
 * @c : Char to intialize each address with
 *
 * Return: A pointer to this address.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(*array) * size);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(array + i) = c;
	}
	return (array);
}
