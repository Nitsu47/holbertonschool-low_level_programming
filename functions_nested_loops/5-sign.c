#include <stdio.h>
#include "main.h"

int
print_sign(int n)
{
	for (n = 48; n <= 57; n++)
	{
		if (n > 48)
		{
			_putchar ('+');
			return (1);
		}
		if (n == 0)
		{
			_putchar ('0');
			return (0);
		}
		if (n < 48)
		{
			_putchar ('-');
			return (-1);
		}
	}
}
