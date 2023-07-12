#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements to be allocated
 * @size: size of elements
 * Return: a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *po, x = 0, y = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	while (x < nmemb)
		x++;
	while (y < size)
		y++;

	po = malloc(sizeof(int) * (x + y + 1));

	if (po == NULL)
		return (NULL);
	free(po);
	return (po);
}
