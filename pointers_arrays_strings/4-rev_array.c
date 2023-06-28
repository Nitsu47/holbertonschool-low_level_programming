#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
int lenght;
int reverse;

n = n - 1;

	for (lenght = 0; lenght < n; lenght++, n--)
	{
		reverse = a[n];
		a[n] = a[lenght];
		a[lenght] = reverse;
	}

}
