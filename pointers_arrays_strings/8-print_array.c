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

	while (x != '\0')
	{
		x++;
	}
	for (n = 0; n < x; n++)
	{
		printf("%i\n", a[n]);
		printf(",");
		printf(" ");
	}
_putchar('\n');
}
