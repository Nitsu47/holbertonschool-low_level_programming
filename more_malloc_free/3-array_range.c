#include "main.h"
#include "stdlib.h"

/**
 * array_range - create an array of integers
 * @min: minimum value to start
 * @max: maximum value to start
 * Return: a pointer
 */

int *array_range(int min, int max)
{
	int *ar;
	int x;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(int) * (max - min + 1));

	if (ar == NULL)
		return (NULL);

	for (x = 0; x < (max - min + 1); x++)
		ar[x] = x + min;

	return (ar);
}
