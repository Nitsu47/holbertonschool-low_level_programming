#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: integer value
 * Return: a new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t l1;
	size_t l2;
	size_t new;

	char *total;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1)
		l1 = strlen(s1);
	if (s2)
		l2 = strlen(s2);

	new = l1 + l2 - 2;

	total = malloc(sizeof(char) * (new + 1));

	if (total == NULL)
		return (NULL);

	if (l2 < n)
		n = l2;

	for (l1 = 0; s1[l1] != '\0'; l1++)
	{
		total[l1] = s1[l1];
	}
	for (l2 = 0; l2 < n; l2++)
	{
		total[l1 + l2] = s2[l2];
	}
	return (total);
}
