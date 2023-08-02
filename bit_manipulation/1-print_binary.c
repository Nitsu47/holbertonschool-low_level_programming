#include "main.h"
/**
 * print_binary - converts the number n in binary representation.
 * @n: integer number to convert
 * Return: the converted number to binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) + '0');
}
