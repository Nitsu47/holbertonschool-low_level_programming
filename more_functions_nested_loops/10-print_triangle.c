#include "main.h"
#include <stdio.h>

void
print_triangle(int size)
{
int x, y = 0;

	int z;

	if (size > 0)
	{
		while (y < size)
		{
			z = size - y - 1;
			while (x < size)
			{
				if (z > x)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				x++;
			}
			y++;
			x = 0;
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
