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
int y = 0;
	while (a[x] != '\0')
	{
		x++;
	}
	for (y = 0; y <= n; y++)
	{
		printf("%i\n", a[x]);
	if (y < n)
		printf(",");
		printf(" ");
		break;
	}
_putchar('\n');
}
