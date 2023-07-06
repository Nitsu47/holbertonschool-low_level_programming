#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - concatenates s1 and s2
 * @s1: pointer to a string
 * @s2: pointer to a string
 * Return: a new string that is the result of s1 + s2
 */

char *str_concat(char *s1, char *s2)
{
	size_t l1 = strlen(s1);
	size_t l2 = strlen(s2);
	size_t new = l1 + l2;

	char *total;

	total = malloc(sizeof(char) * (new + 1));

	if (total == NULL)
		return (NULL);

	memcpy(total, s1, l1 * sizeof(char));

	memcpy(total + l1, s2, l2 * sizeof(char));

	total[new] = '\0';

	return (total);
}
