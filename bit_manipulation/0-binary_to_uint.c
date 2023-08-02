#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned char
 * @b: string of binarys
 * Return: the converted number or 0 if it is NULL or not is an 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0;
	int x = 0;

	if (b == NULL)
		return (0);
	while (b[x])
	{
		conv = (conv << 1);
		if (b[x] != '1' && b[x] != '0')
			return (0);
		if (b[x] == '1')
			conv += 1;
		x++;
	}
	return (conv);
}
