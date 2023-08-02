#include "main.h"
/**
 * get_bit - return the value of a bit at a given index.
 * @n: integer value of a bit.
 * @index: index for the bits.
 * Return: value of the bit at index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index <= (sizeof(unsigned long int) * 8))
		return ((n >> index) & 1);
	else
		return (-1);
}
