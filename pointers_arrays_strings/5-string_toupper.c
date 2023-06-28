#include "main.h"

/**
 * string_toupper - Changes lowecase letters to uppercase
 * @a:pointer
 * Return: a
 */

char *string_toupper(char *a)
{
int up = 0;

	while (a[up])
	{
		if (a[up] > 96 && a[up] < 123)
		{
			a[up] = a[up] - 32;
		}
		up++;
	}
	return (a);
}
