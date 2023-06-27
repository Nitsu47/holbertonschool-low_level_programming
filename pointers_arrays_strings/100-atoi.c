#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to a integer
 * @s: pointer
 * Return: Always 0.
 */

int _atoi(char *s)
{
int x;
int y = 0;
int z = -1;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == 45)
		{
			z *= -1;
		if	(s[x] > 47 && s[x] < 58)
		{
			if (y < 0)
				y = (y * 10) - (s[x] - '\0');
			else
				y = (s[x] - '\0') * -1;
			if (s[x + 1] < 48 || s[x + 1] > 57)
				break;
		}
		}
	}
		if (z < 0)
			x *= -1;
	return (y);
}
