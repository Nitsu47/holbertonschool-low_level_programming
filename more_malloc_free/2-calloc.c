#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements to be allocated
 * @size: size of elements
 * Return: a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *po;

	if (nmemb == 0 || size == 0)
		return (NULL);

	po = malloc(sizeof(int) * (nmemb * size) + 4);

	if (po == NULL)
		return (NULL);

	memset(po, 0, sizeof(int) * (nmemb * size) + 4);

	return (po);
}
