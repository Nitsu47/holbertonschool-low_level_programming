#include "main.h"
/**
 * flip_bits - function that return numers of its flips to get other number.
 * @n: vale to flip #1.
 * @m: value to flip #2.
 * Return: quantity of bits flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x = 0;
	unsigned long int flip = n ^ m;

	while (flip != 0)
	{
		if ((flip & 1) == 1)
		{
			x++;
		}
		flip = flip >> 1;
	}
	return (x);
}
