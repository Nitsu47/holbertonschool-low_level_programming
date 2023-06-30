#include "main.h"

int
_sqrt_recursion(int n)
{
	int y = 1;

	y = aux(n, y);
	return (y);
}

int
aux(int n, int y)
{
	if (n == (y * y))
	{
		return (n);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
		return (aux(n, y + 1));
}
