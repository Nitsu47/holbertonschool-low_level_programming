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
	void *po;

	po = malloc(b);

	exit(b);

	if (po == NULL)
		exit(98);

	return (po);
}
