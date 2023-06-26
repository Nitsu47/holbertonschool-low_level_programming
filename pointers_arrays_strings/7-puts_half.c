#include "main.h"
#include <stdio.h>

/**
 * puts_half - check the code
 * @str: pointer
 * Return: Nothing.
 */

void puts_half(char *str)
{
	int l = 0;
	int i = 0;

	while (str[l] != '\0')
	{
		l++;
	}
		if (l % 2 != 0)
		{
			i = (l / 2) + 1;
		}
		else
		{
			i = l / 2;
		}
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	_putchar('\n');
}
