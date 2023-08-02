#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @index: index of n.
 * @n: pointer to a variable with bits.
 * Return: 1 if it works or -1 if it fails.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index <= (sizeof(unsigned long int) * 8))
	{
		*n = (*n | (1 << index));
		return (1);
	}
	else
	{
		return (-1);
	}
}
