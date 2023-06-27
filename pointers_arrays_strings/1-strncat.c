#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer
 * @src: pointer
 * @n: variable
 * Return: strings.
 */

char *_strncat(char *dest, char *src, int n)
{
int a;
int b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0' && n > b; b++)
	{
		dest[a] = src[b];
		a++;
		if (src[a] == '\0')
		{
			break;
		}
	}
	return (dest);
}
