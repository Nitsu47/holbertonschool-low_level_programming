#include "main.h"
/**
 * clear_bit - function that sets value of a bit to 0.
 * @n: pointer to the integer value in bits.
 * @index: index for the value.
 * Return: 1 if it works or -1 if it fails.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x = 0;
	unsigned long int value = ~0;

	if (index <= (sizeof(unsigned long int) * 8))
	{
		value = value << 1;
		for (; x < index; x++)
		{
			value = value << 1;
			value++;
		}
		*n = *n & value;
		return (1);
	}
	else
		return (-1);
}
