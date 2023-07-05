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
	int x = 0;
	int cpy = 0;

	if (str == NULL)
		return (NULL);
	while (str[x])
		x++;

	p = malloc(sizeof(char) * x + 1);

	if (p == NULL)
		return (NULL);
	for (; cpy < x; cpy++)
	{
		p[cpy] = str[cpy];
	}
	p[x] = '\0';
	return (p);
}
