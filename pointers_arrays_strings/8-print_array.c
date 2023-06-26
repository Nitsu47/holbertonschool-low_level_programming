#include "main.h"
#include <stdio.h>

/**
 * print_array - check the code for
 * @a: pointer
 * @n: variable
 * Return: Nothing.
 */

void print_array(int *a, int n)
{
int x = 0;

	for (x = 0; x <= n; x++)
	{
		printf("%d", a[x]);

		if (x == n - 1)
			continue;

		printf(", ");
	}
_putchar('\n');
}
