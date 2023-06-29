#include "main.h"

/**
 * _strlen_recursion - Returns the lenght of a string
 * @s: pointer
 * Return: a string
 */

int _strlen_recursion(char *s)
{
int l = 0;

	if (s[l] != '\0')
	{
		l++;
	}
	return (l);
	_strlen_recursion(s);
}
