#include "main.h"

int
_sqrt_recursion(int n)
{
	int y = 1;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (aux(n, y));
}

int
aux(int n, int y)
{
	if (n == (y * y))
		return (y);
	if (y == n / 2)
		return (-1);
	if (y < 0)
		return (-1);
	else
		return (aux(n, y + 1));
}
