#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer
 * @str: pointer to a string
 * Return: a copy of a string
 */

char *_strdup(char *str)
{
	char *p;
	int x;

	if (str == NULL)
		return (NULL);

	p = malloc(sizeof(char) + 1);

	p = str;

	for (x = 0; p[x] != '\0'; x++)
	{
	}
	return (p);
}
