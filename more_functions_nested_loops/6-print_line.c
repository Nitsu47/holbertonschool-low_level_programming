#include "main.h"
#include <stdio.h>

void
print_line(int n)
{
int y = 0;

	if (n > 0)
	{
		while (y < n)
		{
			_putchar('_');
			y++;
		}
	_putchar('\n');
	}
	else
	{
_putchar ('\n');
	}
}
