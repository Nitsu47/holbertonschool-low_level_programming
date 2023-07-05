#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: chars in the array
 * Return: an array
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int x;

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		ar[x] = c;
	}
	return (ar);
}
