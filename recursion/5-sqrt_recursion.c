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
	else if (n == y || y < 0)
	{
		return (-1);
	}
	else
	{
		y++;
	}
	return (aux(n, y));
}
