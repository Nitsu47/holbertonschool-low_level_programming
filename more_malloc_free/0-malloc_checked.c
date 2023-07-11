#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: integer variable
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *po = malloc(sizeof(int) * b);

	exit(b);

	if (po == NULL)
		return ("98");
	return (po);
}
