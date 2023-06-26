#include "main.h"
#include <stdio.h>

/**
 * _strcpy - check the code
 * @dest: pointer
 * @src: pointer
 * Return: Nothing.
 */

char *_strcpy(char *dest, char *src)
{
int a = 0;

	while (src[a])
	{
		dest[a] = src[a];
		a++;
	}
return (dest);
}
