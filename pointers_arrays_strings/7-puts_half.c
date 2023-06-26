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
	int i;

	while (str[l] != '\0')
	{
		l++;
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == '0' && i > l / 2)
		{
			_putchar(str[i]);
		}
		else
		{
			_putchar(str[i + 1]);
		}
	}
	_putchar('\n');
}
