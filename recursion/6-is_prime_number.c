#include "main.h"
int exx(int n, int x, int max);

/**
 * is_prime_number - returns 1 or 0 depending if it is a prime number.
 * @n: integer variable.
 * Return: integers.
 */

int is_prime_number(int n)
{
	return (exx(n, 2, n / 2));
}

/**
 * exx - auxiliar function to do recursion
 * @n: prime number
 * @x: prime number counter
 * @max: maximum acepted
 * Return: 1 and 0
 */

int exx(int n, int x, int max)
{
	if ((n % x == 0 && x <= max) || n < 0 || n == 1)
		return (0);
	else if (n % x != 0 && x <= max)
		return (exx(n, x + 1, max));
	else
		return (1);
}
